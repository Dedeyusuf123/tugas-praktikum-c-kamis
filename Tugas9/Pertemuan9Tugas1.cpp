#include <stdio.h>

int main()
 {
    int A[11] = {12, 17, 10, 5, 15, 25, 11, 7, 25, 16, 19};
    int i, n, found = 0;

    printf("Masukkan bilangan integer = ");
    scanf("%i", & n);

    // Cetak isi array
    printf("Isi array: ");
    for (i = 0; i < 11; i++) {
        printf("%3i", A[i]);
    }

    printf("\nLokasi bilangan yang sama: ");
    for (i = 0; i < 11; i++) {
        if (A[i] == n) {
            printf("%d ", i);
            found = 1;
        }
    }

    printf("\n");

    if (found) {
        printf("ADA\n");
    } else {
        printf("TIDAK ADA\n");
    }

    return 0;
}
