#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

struct Antrian
{
      char merk_mobil[50];
      char nama_pemilik[50];
      int nomor_plat;
      struct Antrian *next;
      struct Antrian *prev;
};

struct Antrian *head = NULL;
struct Antrian *tambahantrian(struct Antrian *);
struct Antrian *hapusantrian(struct Antrian *);
struct Antrian *tampilkan(struct Antrian *);

int main()
{
      int pilihan;
      do
      {
            printf("\n\n========== PERPUSTAKAAN =========\n");
            printf("\n1. Tambah daftar parkir\n");
            printf("\n2. Hapus Parkir\n");
            printf("\n3. Tampilkan daftar parkir\n");
            printf("\n4. Keluar\n");
            printf("\nMasukan pilihaan anda : ");
            scanf("%d", &pilihan);
            switch(pilihan)
            {
                  case 1:
                        system("cls");
                        head = tambahantrian(head);
                        break;
                  
                  case 2:
                        system("cls");
                        head = hapusantrian(head);
                        break;
                  
                  case 3:
                        system("cls");
                        head = tampilkan(head);
                        break;
                  
            }
      }while(pilihan != 4);

      return 0;
}

struct Antrian *tambahantrian(struct Antrian *head)
{
      system("cls");
      struct Antrian *new_node, *ptr;
      int nomor_plat;
      char merk_mobil[50], nama_pemilik[50];
      printf("masukan merk mobil : ");
      scanf("%s", merk_mobil);
      printf("masukan nama pemilik : ");
      scanf("%s", nama_pemilik);
      printf("Masukan nomor plat : ");
      scanf("%d",&nomor_plat);
      new_node = (struct Antrian*)malloc(sizeof(struct Antrian));
      strcpy(new_node->merk_mobil, merk_mobil);
      strcpy(new_node->nama_pemilik, nama_pemilik);
      new_node->nomor_plat = nomor_plat;
      

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

struct Antrian *hapusantrian(struct Antrian *head)
{
      struct Antrian *ptr;
      ptr = head;

      head = head->next;
      head->prev = NULL;
      free(ptr);
      printf("\n ANTRIAN AWAL BERHASIL DIHAPUS! \n");
      return head;
}

struct Antrian *tampilkan(struct Antrian *head)
{
      struct Antrian *ptr;
      int count = 1;
      ptr = head;
      printf(" DAFTAR PARKIRAN \n\n");
      while(ptr != NULL)
      {
            printf("\n=============================\n");
            printf("\nparkir ke-%d\n", count);
            printf("merk mobil\t : %s\n",ptr->merk_mobil);
            printf("nama pemilik\t : %s\n",ptr->nama_pemilik);
            printf("Nomor plat\t : %d", ptr->nomor_plat);
            ptr = ptr->next;
            count ++;
      }
      return head;
}