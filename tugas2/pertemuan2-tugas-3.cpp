#include <stdio.h>
#include <math.h>

int main() 
{
    // Diketahui
    float alas = 4.0; // Panjang sisi alas 
    float tinggi = 5.0; // Panjang sisi tinggi
    float sisi_miring;

    // Menghitung sisi miring menggunakan rumus Pythagoras
    sisi_miring = sqrt(pow(alas, 2) + pow(tinggi, 2));

    // Menampilkan output
    printf("Panjang sisi miring segitiga siku-siku adalah %.2f cm.\n", sisi_miring);

    return 0;
}