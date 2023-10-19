#include <stdio.h>

int main()
 {
    // Diketahui
    float alas = 8.0; // Panjang alas
    float tinggi = 5.0; // Tinggi
    float luas;

    // Menghitung luas segitiga
    luas = 0.5 * alas * tinggi;

    // Menampilkan output luas segitiga
    printf("Luas segitiga dengan alas %.2f cm dan tinggi %.2f cm adalah %.2f cm^2.\n", alas, tinggi, luas);

    return 0;
}