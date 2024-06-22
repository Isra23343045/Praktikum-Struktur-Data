#include <stdio.h>
#include <stdlib.h>

#define MAX 100


typedef struct Node {
    int nilai;
    struct Node* next;
} Node;


typedef struct Graf {
    int jumlahSimpul;
    Node** daftarKeterhubungan;
    int* sudahDikunjungi;
} Graf;


typedef struct Queue {
    int elemen[MAX];
    int depan;
    int belakang;
} Queue;


Node* buatSimpul(int v) {
    Node* simpulBaru = malloc(sizeof(Node));
    simpulBaru->nilai = v;
    simpulBaru->next = NULL;
    return simpulBaru;
}


Graf* buatGraf(int simpul) {
    Graf* graf = malloc(sizeof(Graf));
    graf->jumlahSimpul = simpul;
    graf->daftarKeterhubungan = malloc(simpul * sizeof(Node*));
    graf->sudahDikunjungi = malloc(simpul * sizeof(int));

    for (int i = 0; i < simpul; i++) {
        graf->daftarKeterhubungan[i] = NULL;
        graf->sudahDikunjungi[i] = 0;
    }
    return graf;
}


void tambahkanSisi(Graf* graf, int sumber, int tujuan) {
    
    Node* simpulBaru = buatSimpul(tujuan);
    simpulBaru->next = graf->daftarKeterhubungan[sumber];
    graf->daftarKeterhubungan[sumber] = simpulBaru;

    
    simpulBaru = buatSimpul(sumber);
    simpulBaru->next = graf->daftarKeterhubungan[tujuan];
    graf->daftarKeterhubungan[tujuan] = simpulBaru;
}


Queue* buatAntrian() {
    Queue* q = malloc(sizeof(Queue));
    q->depan = -1;
    q->belakang = -1;
    return q;
}


void masukAntrian(Queue* q, int nilai) {
    if (q->belakang == MAX - 1)
        printf("\nAntrian Penuh!!");
    else {
        if (q->depan == -1)
            q->depan = 0;
        q->belakang++;
        q->elemen[q->belakang] = nilai;
    }
}


int keluarAntrian(Queue* q) {
    int item;
    if (q->depan == -1) {
        printf("Antrian kosong");
        item = -1;
    } else {
        item = q->elemen[q->depan];
        q->depan++;
        if (q->depan > q->belakang) {
            q->depan = q->belakang = -1;
        }
    }
    return item;
}


int antrianKosong(Queue* q) {
    if (q->belakang == -1)
        return 1;
    else
        return 0;
}


void BFS(Graf* graf, int simpulAwal) {
    Queue* q = buatAntrian();

    graf->sudahDikunjungi[simpulAwal] = 1;
    masukAntrian(q, simpulAwal);

    while (!antrianKosong(q)) {
        int simpulSaatIni = keluarAntrian(q);
        printf("Dikunjungi %d\n", simpulSaatIni);

        Node* temp = graf->daftarKeterhubungan[simpulSaatIni];

        while (temp) {
            int simpulTetangga = temp->nilai;

            if (graf->sudahDikunjungi[simpulTetangga] == 0) {
                graf->sudahDikunjungi[simpulTetangga] = 1;
                masukAntrian(q, simpulTetangga);
            }
            temp = temp->next;
        }
    }
}

int main() {
    Graf* graf = buatGraf(6);
    tambahkanSisi(graf, 0, 1);
    tambahkanSisi(graf, 0, 2);
    tambahkanSisi(graf, 1, 2);
    tambahkanSisi(graf, 1, 4);
    tambahkanSisi(graf, 2, 3);
    tambahkanSisi(graf, 3, 4);
    tambahkanSisi(graf, 4, 5);

    printf("Breadth First Search mulai dari simpul 0:\n");
    BFS(graf, 0);

    return 0;
}
