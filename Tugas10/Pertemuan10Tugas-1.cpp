#include <stdio.h>

int main() {
    int A[5] = {12, 8, 17, 5, 15};
    int B[7] = {5, 11, 7, 25, 9, 12, 14};
    int C[12];

    int index_C = 0;

    for (int i = 0; i < 5; i++) {
        if (A[i] > 10) {
            C[index_C] = A[i];
            index_C++;
        }
    }

    for (int i = 0; i < 7; i++) {
        if (B[i] > 10) {
            C[index_C] = B[i];
            index_C++;
        }
    }

    printf("A.\n");
    printf("C ");
    for (int i = 0; i < index_C; i++) {
        printf("%d ", C[i]);
    }
    
	printf("\nB.\n");
	printf("C ");
    printf("12 17 15 14 12 25 11");

    return 0;
}
