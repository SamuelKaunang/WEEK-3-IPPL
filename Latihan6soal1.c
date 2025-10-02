#include <stdio.h>

int main() {
    int a, b, c, max;

    printf("Masukkan 3 bilangan bulat (a b c): ");
    scanf("%d %d %d", &a, &b, &c);

    
    if (a <= 0 || b <= 0 || c <= 0) {
        printf("Tidak ada segitiga dapat dibangun.\n");
        return 0;
    }

    
    max = a;
    if (b > max) max = b;
    if (c > max) max = c;

    
    if (a + b <= c || a + c <= b || b + c <= a) {
        printf("Tidak ada segitiga dapat dibangun.\n");
        return 0;
    }

    
    if (a == b && b == c) {
        printf("Segitiga Sama Sisi (EQUILATERAL).\n");
    }
    
    else if (a == b || b == c || a == c) {
        printf("Segitiga Sama Kaki (ISOSCELES).\n");
    }
    
    else if ((a * a + b * b == c * c) ||
             (a * a + c * c == b * b) ||
             (b * b + c * c == a * a)) {
        printf("Segitiga Siku-siku (RIGHT TRIANGLE).\n");
    }
    
    else {
        printf("Segitiga Bebas (SCALENE).\n");
    }

    return 0;
}

