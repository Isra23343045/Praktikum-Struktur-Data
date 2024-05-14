// Implementasi stack menggunakan linked list prorgram 2

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
struct Node
{
    int NIM;
    char nama[20];
    double nilai;
    struct Node *next;
} *atas = NULL;
void push(int, double, char[]);
void pop();
void tampilkan();
int main()
{
    int pilihan, NIM;
    char nama[20];
    double nilai;
    printf("\n== Stack Menggunakan Linked List ==\n");
    while (1)
    {
        printf("\n****** MENU ******\n");
        printf("1. Tambah data mahasiswa \n2. Hapus data mahasiswa\n3. Tampilkan Data Mahasiswa\n4. Keluar\n");
        printf("Masukan pilihanmu: ");
        scanf("%d", &pilihan);
        switch (pilihan)
        {
        case 1:
            system("cls");
            printf("Masukan NIM mahasiswa : ");
            scanf("%d", &NIM);
            printf("masukkan nilai mahasiswa : ");
            scanf("%lf", &nilai);
            getchar();
            printf("masukkan nama mahasiswa : ");
            fgets(nama, 20, stdin);
            system("cls");
            push(NIM, nilai, nama);
            break;
        case 2:
            system("cls");
            pop();
            break;
        case 3:
            system("cls");
            tampilkan();
            break;
        case 4:
            exit(0);
        default:
            printf("\nPilihan tidak valid, silakan coba lagi!\n");
        }
    }
}

void push(int value, double nilai, char nama[])
{
    struct Node *newNode;
    newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->NIM = value;
    newNode->nilai = nilai;
    strcpy(newNode->nama, nama);
    if (atas == NULL)
        newNode->next = NULL;
    else
        newNode->next = atas;
    atas = newNode;
    printf("\nItem berhasil ditambahkan\n");
}

void pop()
{
    if (atas == NULL)
        printf("\nStack kosong!!!\n");
    else
    {
        struct Node *temp = atas;
        printf("\nItem berhasil dihapus!");
        atas = temp->next;
        free(temp);
    }
}

void tampilkan()
{
    if (atas == NULL)
        printf("\nStack kosong!!!\n");
    else
    {
        struct Node *temp = atas;
        while (temp->next != NULL)
        {
           printf("NIM: %d, Nilai: %.2lf, Nama: %s\n", temp->NIM, temp->nilai, temp->nama);
            temp = temp->next;
        }
        printf("NIM: %d, Nilai: %.2lf, Nama: %s\n", temp->NIM, temp->nilai, temp->nama);
    }
}