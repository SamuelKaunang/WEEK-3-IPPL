#include <stdio.h>

int main() {
    int a, b, c, max;

    printf("Masukkan 3 bilangan bulat (a b c): ");
    scanf("%d %d %d", &a, &b, &c);

    // Cek jika ada sisi <= 0
    if (a <= 0 || b <= 0 || c <= 0) {
        printf("Tidak ada segitiga dapat dibangun.\n");
        return 0;
    }

    // Cari sisi terbesar
    max = a;
    if (b > max) max = b;
    if (c > max) max = c;

    // Cek aturan segitiga
    if (a + b <= c || a + c <= b || b + c <= a) {
        printf("Tidak ada segitiga dapat dibangun.\n");
        return 0;
    }

    // Cek segitiga sama sisi
    if (a == b && b == c) {
        printf("Segitiga Sama Sisi (EQUILATERAL).\n");
    }
    // Cek segitiga sama kaki
    else if (a == b || b == c || a == c) {
        printf("Segitiga Sama Kaki (ISOSCELES).\n");
    }
    // Cek segitiga siku-siku (Pythagoras)
    else if ((a * a + b * b == c * c) ||
             (a * a + c * c == b * b) ||
             (b * b + c * c == a * a)) {
        printf("Segitiga Siku-siku (RIGHT TRIANGLE).\n");
    }
    // Jika tidak masuk kategori lain → segitiga bebas
    else {
        printf("Segitiga Bebas (SCALENE).\n");
    }

    return 0;
}
