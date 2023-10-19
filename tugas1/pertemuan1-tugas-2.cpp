#include <stdio.h>

int main()
 {
    // Diketahui
    double panjang = 10.0; // Panjang
    double lebar = 7.0;    // Lebar

    // Menghitung luas persegi panjang
    double luas = panjang * lebar;

    // Hasil di layar
    printf("Luas persegi panjang dengan panjang %.2f cm dan lebar %.2f cm adalah %.2f cm^2.\n", panjang, lebar, luas);

    return 0;

}