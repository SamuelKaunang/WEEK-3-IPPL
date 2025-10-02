#include <stdio.h>
#include <math.h>

int cek_angka(float angka1, float angka2) {
   float selisih = fabs(angka1 - angka2);
   float rata_rata = (fabs(angka1) + fabs(angka2)) / 2.0;
   float tolerance = (selisih / rata_rata)*100;
   if (tolerance <=1.0){
        return 1;
   }else{
        return 0;
   }
}
void segitiga(float a, float b, float c){
    // cek bilangan negatif
    if (a <= 0 || b <= 0 || c <= 0){
        printf("Inputan tidak valid\n");
        return;
    } 
    
    // cek bukan segitiga
    // Jika sisi terbesar >= jumlah 2 sisi lainnya (dengan toleransi)
    if (a > (b+c) || b > (a+c) || c > (a+b) ||
        cek_angka(a, b+c) || cek_angka(b, a+c) || cek_angka(c, a+b)) {
        printf("Bukan segitiga\n");
        return;
    }

    // segitiga sama sisi
    if (cek_angka(a,b) && cek_angka(b,c)){
        printf("Segitiga sama sisi\n");
        return;
    } 
    
    // segitiga sama kaki
    else if (cek_angka(a,b) || cek_angka(b,c) || cek_angka(a,c)){
        printf("Segitiga sama kaki\n"); 
        return;
    }

    // segitiga siku-siku
    float kuadrat_a = a * a;
    float kuadrat_b = b * b;
    float kuadrat_c = c * c;
    if (cek_angka(kuadrat_a, kuadrat_b + kuadrat_c) ||
        cek_angka(kuadrat_b, kuadrat_a + kuadrat_c) ||
        cek_angka(kuadrat_c, kuadrat_a + kuadrat_b)) {
        printf("Segitiga siku-siku\n");
        return;
    }
    
    // segitiga bebas
    printf("Segitiga bebas\n");
}

int main() {
    float a, b, c;

    printf("Masukkan 3 bilangan untuk sisi segitiga:\n");
    printf("Sisi a: ");
    scanf("%f", &a);
    printf("Sisi b: ");
    scanf("%f", &b);
    printf("Sisi c: ");
    scanf("%f", &c);
    
    printf("\nHasil: ");
    segitiga(a, b, c);
    
    return 0; 
}