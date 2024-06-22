#include <stdio.h>
#include <stdlib.h>

struct Buku
{
      int data;
      struct Buku *prev;
      struct Buku *next;
};

struct Buku *head;
void tambahawal();
void tambahakhir();
void hapusawal();
void hapusakhir();
void tampilkan();
void cari();

int main()
{
      int choice = 0;
      while (choice != 7)
      {
            printf("\n********Main Menu********\n");
            printf("Silahkan pilih salah satu dari menu berikut...\n");
            printf("\n==============================================\n");
            printf("1. Masukan data di awal\n");
            printf("2. Masukan data di akhir\n");
            printf("3. Hapus dari awal\n");
            printf("4. Hapus dari akhir\n");
            printf("5. Cari sebuah elemen\n");
            printf("6. Tampilkan\n");
            printf("7. Exit\n");
            printf("Masukan pilihan mu : \n");
            scanf("%d", &choice);
            switch(choice)
            {
                  case 1:
                        tambahawal();
                        break;
                  
                  case 2:
                        tambahakhir();
                        break;

                  case 3:
                        hapusawal();
                        break;
                   
                  case 4:
                        hapusakhir();
                        break;
                  
                  case 5:
                        cari();
                        break;
                  
                  case 6:
                        tampilkan();
                        break;
                  
                  case 7:
                        exit(0);
                        break;
                  
                  default:
                        printf("Mohon masukan pilihan yang sesuai menu..");
            }
      }
}

void tambahawal()
{
      struct Buku *ptr, *temp;
      int item;
      ptr = (struct Buku *)malloc(sizeof(struct Buku));
      if(ptr == NULL)
      {
            printf("\nOVERFLOW");
      }
      else
      {
            printf("\nMasukan node data? ");
            scanf("%d", &item);
            ptr->data = item;
            if(head == NULL)
            {
                  head = ptr;
                  ptr->prev = head;
                  ptr->next = head;
            }
            else
            {
                  temp = head;
                  while(temp->next != head)
                  {
                        temp = temp->next;
                  }
                  temp->next = ptr;
                  ptr->prev = temp;
                  head->prev = ptr;
                  ptr->next = head;
                  head = ptr;
            }
            printf("\nNode telah dimasukan");
      }
}

void tambahakhir()
{
      struct Buku *ptr, *temp;
      int item;
      ptr = (struct Buku *)malloc(sizeof(struct Buku));
      if(ptr == NULL)
      {
            printf("\nOVERFLOW");
      }
      else
      {
            printf("\nMasukan data : ");
            scanf("%d", &item);
            ptr->data = item;
            if(head == NULL)
            {
                  head = ptr;
                  ptr->next = head;
                  ptr->prev = head;
            }
            else
            {
                  temp = head;
                  while(temp->next != head)
                  {
                        temp = temp->next;
                  }
                  temp->next = ptr;
                  ptr->prev = temp;
                  head->prev = ptr;
                  ptr->next = head;
            }
            
      }
      printf("\n Node inserted");
}

void hapusawal()
{
      struct Buku *temp;
      if(head == NULL)
      {
            printf("\nUNDEFLOW");
      }
      else if(head->next == head)
      {
            head = NULL;
            free(head);
            printf("\nNode dihapus");
      }
      else
      {
            temp = head;
            while(temp->next != head)
            {
                  temp = temp->next;
            }
            temp->next = head->next;
            head->next->prev = temp;
            free(head);
            head = temp->next;
            printf("\nNode dihapus");
      }
}

void hapusakhir()
{
      struct Buku *ptr;
      if(head == NULL)
      {
            printf("\nUNDERFLOW");
      }
      else if(head->next == head)
      {
            head = NULL;
            free(head);
            printf("\nNode dihapus ");
      }
      else
      {
            ptr= head;
            if(ptr->next != head)
            {
                  ptr = ptr->next;
            }
            ptr->prev->next = head;
            head->prev = ptr->prev;
            free(ptr);
            printf("\nNode dihapus");
      }
}

void tampilkan()
{
      struct Buku *ptr;
      ptr = head;
      if(head == NULL)
      {
            printf("\ntidak ada sesuatu untuk ditampilkan");
      }
      else
      {
            printf("\n Menampilkan nilai...\n");
            while(ptr->next != head)
            {
                  printf("%d\n", ptr->data);
                  ptr = ptr->next;
            }
            printf("%d\n", ptr->data);
      }
}

void cari()
{
      struct Buku *ptr;
      int item, i = 0, flag = 1;
      ptr = head;
      if(ptr == NULL)
      {
            printf("\nList kosong\n");
      }
      else
      {
            printf("\nMasukan item yang ingin dicari : ");
            scanf("%d", &item);
            if(head->data == item)
            {
                  printf("Item ditemukan pada lokasi %d", i + 1);
                  flag = 0;
            }
            else
            {
                  while (ptr->next != head)
                  {
                        if(ptr->data == item)
                        {
                              printf("item ditemukan pada lokasi %d ", i + 1);
                              flag = 0;
                              break;
                        }
                        else
                        {
                              flag = 1;
                        }
                        i++;
                        ptr = ptr->next;
                  }
            }
            if(flag != 0)
            {
                  printf("Item tidak ditemukan");
            }
      }
}