#include <stdio.h>

int main() {
    int nilai[10];
    int i;

    // Input nilai mahasiswa
    printf("Masukkan 10 nilai mahasiswa:\n");
    for (i = 0; i < 10; i++) {
        printf("Nilai ke-%d: ", i + 1);
        scanf("%d", &nilai[i]);
    }

    // Cetak nilai yang lulus
    printf("\nNilai mahasiswa yang lulus (>= 60):\n");
    for (i = 0; i < 10; i++) {
        if (nilai[i] >= 60) {
            printf("%d ", nilai[i]);
        }
    }

    return 0;
}
