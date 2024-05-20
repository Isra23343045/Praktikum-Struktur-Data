#include <stdio.h>
#include <string.h>

#define MAX 100

typedef struct {
    int NIM;
    char Nama[50];
    char TTL[50];
    float IPK;
} Mahasiswa;

int pencarianSequential(Mahasiswa mhs[], int n, int NIM) {
    for (int i = 0; i < n; i++) {
        if (mhs[i].NIM == NIM) {
            return i;
        }
    }
    return -1;
}

int pencarianBinary(Mahasiswa mhs[], int n, int NIM) {
    int pertama = 0, terakhir = n - 1, tengah;

    while (pertama <= terakhir) {
        tengah = (pertama + terakhir) / 2;

        if (mhs[tengah].NIM == NIM) {
            return tengah;
        } else if (mhs[tengah].NIM < NIM) {
            pertama = tengah + 1;
        } else {
            terakhir = tengah - 1;
        }
    }
    return -1;
}

void urutkanMahasiswaByNIM(Mahasiswa mhs[], int n) {
    Mahasiswa temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (mhs[i].NIM > mhs[j].NIM) {
                temp = mhs[i];
                mhs[i] = mhs[j];
                mhs[j] = temp;
            }
        }
    }
}

void cetakMahasiswa(Mahasiswa m) {
    printf("NIM: %d\n", m.NIM);
    printf("Nama: %s\n", m.Nama);
    printf("TTL: %s\n", m.TTL);
    printf("IPK: %.2f\n", m.IPK);
}

int main() {
    Mahasiswa mhs[MAX];
    int n, NIM, hasil;

    printf("Masukkan jumlah mahasiswa: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Masukkan NIM: ");
        scanf("%d", &mhs[i].NIM);
        printf("Masukkan Nama: ");
        scanf(" %[^\n]%*c", mhs[i].Nama);
        printf("Masukkan TTL: ");
        scanf(" %[^\n]%*c", mhs[i].TTL);
        printf("Masukkan IPK: ");
        scanf("%f", &mhs[i].IPK);
    }

    printf("Masukkan NIM yang dicari: ");
    scanf("%d", &NIM);

    hasil = pencarianSequential(mhs, n, NIM);
    if (hasil != -1) {
        printf("\nPencarian Sequential:\n");
        cetakMahasiswa(mhs[hasil]);
    } else {
        printf("\nPencarian Sequential: Data tidak ditemukan!\n");
    }

    urutkanMahasiswaByNIM(mhs, n);

    hasil = pencarianBinary(mhs, n, NIM);
    if (hasil != -1) {
        printf("\nPencarian Binary:\n");
        cetakMahasiswa(mhs[hasil]);
    } else {
        printf("\nPencarian Binary: Data tidak ditemukan!\n");
    }

    return 0;
}
