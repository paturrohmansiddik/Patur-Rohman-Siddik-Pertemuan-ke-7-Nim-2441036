#include <stdio.h>

int main() {
    int A[11] = {12, 15, 7, 10, 5, 2, 17, 25, 9, 20, 35};
    int B[11] = {0}; // Array untuk menyimpan nilai genap
    int i, j = 0;

    // Memindahkan nilai genap ke array B
    for (i = 0; i < 11; i++) {
        if (A[i] % 2 == 0) {
            B[j] = A[i];
            j++;
        }
    }

    // Cetak isi array B
    printf("Isi array B (nilai genap):\n");
    for (i = 0; i < 11; i++) {
        printf("%d ", B[i]);
    }

    return 0;
}

