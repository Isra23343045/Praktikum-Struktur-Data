#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

struct Buku
{
      char judul[50];
      char nama_pengarang[50];
      int tahun;
      struct Buku *next;
      struct Buku *prev;
};

struct Buku *head = NULL;
struct Buku *tambahbuku(struct Buku *);
struct Buku *hapusbuku(struct Buku *);
struct Buku *tampilkan(struct Buku *);

int main()
{
      int pilihan;
      do
      {
            printf("\n\n========== PERPUSTAKAAN =========\n");
            printf("\n1. Tambah daftar Buku\n");
            printf("\n2. Hapus Buku\n");
            printf("\n3. Tampilkan daftar buku\n");
            printf("\n4. Keluar\n");
            printf("\nMasukan pilihaan anda : ");
            scanf("%d", &pilihan);
            switch(pilihan)
            {
                  case 1:
                        system("cls");
                        head = tambahbuku(head);
                        break;
                  
                  case 2:
                        system("cls");
                        head = hapusbuku(head);
                        break;
                  
                  case 3:
                        system("cls");
                        head = tampilkan(head);
                        break;
                  
                  default:
                        printf("mohon masukan pilihan yang valid!");
                        break;
            }
      }while(pilihan != 4);

      return 0;
}

struct Buku *tambahbuku(struct Buku *head)
{
      system("cls");
      struct Buku *new_node, *ptr;
      int tahun;
      char judul[50], nama_pengarang[50];
      printf("masukan nama buku/judul buku : ");
      scanf("%s", judul);
      printf("masukan nama penerbit : ");
      scanf("%s", nama_pengarang);
      printf("Masukan tahun terbit : ");
      scanf("%d",&tahun);
      new_node = (struct Buku*)malloc(sizeof(struct Buku));
      strcpy(new_node->judul, judul);
      strcpy(new_node->nama_pengarang, nama_pengarang);
      new_node->tahun = tahun;
      

      if(head == NULL)
      {
            new_node->next = NULL;
            new_node->prev = NULL;
            head = new_node;
      }
      else
      {
            ptr = head;
            while(ptr->next != NULL)
            {
                  ptr = ptr->next;
            }
            ptr->next = new_node;
            new_node->next = NULL;
            new_node->prev = NULL;
      }
      return head;
}

struct Buku *hapusbuku(struct Buku *head)
{
      struct Buku *ptr;
      ptr = head;

      head = head->next;
      head->prev = NULL;
      free(ptr);
      printf("\n BUKU AWAL BERHASIL DIHAPUS! \n");
      return head;
}

struct Buku *tampilkan(struct Buku *head)
{
      struct Buku *ptr;
      ptr = head;
      printf(" DAFTAR BUKU PERPUSTAKAAN \n\n");
      while(ptr != NULL)
      {
            printf("\n=============================\n");
            printf("\nJudul\t : %s\n",ptr->judul);
            printf("nama penerbit\t : %s\n",ptr->nama_pengarang);
            printf("Tahun\t : %d", ptr->tahun);
            ptr = ptr->next;
      }
      return head;
}