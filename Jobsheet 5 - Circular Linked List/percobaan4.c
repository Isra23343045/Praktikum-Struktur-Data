#include <stdio.h>
#include <conio.h>
#include <malloc.h>
#include <stdlib.h>

struct Buku
{
      struct Buku *next;
      int data;
      struct Buku *prev;
};

struct Buku *start = NULL;
struct Buku *create_ll(struct Buku *); 
struct Buku *display(struct Buku *);
struct Buku *insert_beg(struct Buku *); 
struct Buku *insert_end(struct Buku *); 
struct Buku *insert_before(struct Buku *); 
struct Buku *insert_after(struct Buku *); 
struct Buku *delete_beg(struct Buku *); 
struct Buku *delete_end(struct Buku *); 
struct Buku *delete_before(struct Buku *); 
struct Buku *delete_after(struct Buku *); 
struct Buku *delete_list(struct Buku *); 


int main()
{
      int option;
      do
      {
            printf("\n\n ======= DOUBLE LINKED LIST =======\n");
            printf("\n 1: Buat double linked list");
            printf("\n 2: Tampilkan semua node double linked list ");
            printf("\n 3: Tambah node di awal double linked list ");
            printf("\n 4: Tambah node di akhir double linked list");
            printf("\n 5: Tambah node sebelum node yang diberikan");
            printf("\n 6: tambah node setelah node yang diberikan");
            printf("\n 7: Hapus node di awal double linked list");
            printf("\n 8: Hapus node di akhir double linked list");
            printf("\n 9: Hapus semua node single linked list");
            printf("\n 10: Keluar dari program");
            printf("\n\n masukkan pilihan menu : ");
            scanf("%d", &option);
            switch(option)
            {
                  case 1:
                        system("cls");
                        start = create_ll(start);
                        printf("\n DOUBLE LINKED LIST CREATED");
                        break;
                  
                  case 2:
                        system("cls");
                        start = display(start);
                        break;
                  
                  case 3:
                        system("cls");
                        start = insert_beg(start);
                        break;
                  
                  case 4:
                        system("cls");
                        start = insert_end(start);
                        break;
                  
                  case 5:
                        system("cls");
                        start = insert_before(start);
                        break;

                  case 6:
                        system("cls");
                        start = insert_after(start);
                        break;

                  case 7:
                        system("cls");
                        start = delete_beg(start);
                        break;

                  case 8:
                        system("cls");
                        start = delete_end(start);
                        break;
                  
                  case 9:
                        start = delete_list(start);
                        printf("\n DOUBLE LINKED LIST DELETED");
                        break;
            }
      }
      while(option != 10);
      getch();
      return 0;
}

struct Buku *create_ll(struct Buku *start)
{
      system("cls");
      struct Buku *new_node, *ptr;
      int num;
      printf("\n Tekan 0 untuk berhenti input data");
      printf("\n Masukan data : ");
      scanf("%d",&num);
      while(num!=0)
      {
            new_node = (struct Buku*)malloc(sizeof(struct Buku));
            new_node->data = num;

            if(start == NULL)
            {
                  new_node->next = NULL;
                  new_node->prev = NULL;
                  start = new_node;
            }
            else
            {
                  ptr = start;
                  while(ptr->next != NULL)
                  {
                        ptr = ptr->next;
                  }
                  ptr->next = new_node;
                  new_node->next = NULL;
                  new_node->prev = NULL;
            }
            printf(" Masukkan data berikutnya : ");
            scanf("%d", &num);

      }
      return start;
}

struct Buku *display(struct Buku *start)
{
      struct Buku *ptr;
      ptr = start;
      printf(" DATA DOUBLE LINKED LIST \n\n");
      while(ptr != NULL)
      {
            printf("\t %d", ptr->data);
            ptr = ptr->next;
      }
      return start;
}

struct Buku *insert_beg(struct Buku *start)
{
      struct Buku *new_node;
      int num;
      printf(" TAMBAH DATA DI AWAL \n\n");
      printf("\n Masukan data : ");
      scanf("%d", &num);

      new_node = (struct Buku *)malloc(sizeof(struct Buku));
      new_node->data = num;
      start->prev = new_node;
      new_node->next = start;
      new_node->prev = NULL;
      start = new_node;
      printf("\n DATA BERHASIL DITAMBAHKAN! \n");
      return start;
}

struct Buku *insert_end(struct Buku *start)
{
      struct Buku *ptr, *new_node;
      int num;
      printf(" TAMBAH DATA DI AKHIR \n\n");
      printf("\n Masukan data : ");
      scanf("%d", &num);
      new_node = (struct Buku *)malloc(sizeof(struct Buku));
      new_node->data = num;
      ptr = start;
      while(ptr->next != NULL)
      {
            ptr = ptr->next;
            ptr->next = new_node;
            new_node->next = NULL;
            new_node->prev = ptr;
      }
      printf("\n DATA BERHASIL DITAMBAHKAN \n");
      return start;
}

struct Buku *insert_before(struct Buku *start)
{
      struct Buku *new_node, *ptr;
      int num, val;
      printf(" TAMBAH DATA SEBELUM NODE TERTENTU \n\n");
      printf("\n Masukan data : ");
      scanf("%d", &num);

      printf("\n Data baru ditambahkan sebelum node dengan data : ");
      scanf("%d", &val);

      new_node = (struct Buku *)malloc(sizeof(struct Buku));
      new_node->data = num;
      ptr = start;

      while(ptr->data != val)
      {
            ptr = ptr->next;
            new_node->next = ptr;
            new_node->prev = ptr->prev;
            ptr->prev->next = new_node;
            ptr->prev = new_node;
      }
      return start;
}

struct Buku *insert_after(struct Buku *start)
{
      struct Buku *new_node, *ptr;
      int num, val;
      printf(" TAMBAH DATA SETELAH NODE TERTENTU \n\n");
      printf("\n Masukan data : ");
      scanf("%d", &num);
      printf("\n Data baru ditambahkan setelah node dengan data : ");
      scanf("%d", &val);

      new_node = (struct Buku *)malloc(sizeof(struct Buku));
      new_node->data = num;
      ptr = start;
      while(ptr->data != val)
      {
            ptr = ptr->next;
            new_node->prev = ptr;
            new_node->next = ptr->next;
            ptr->next->prev = new_node;
            ptr->next = new_node;
      }
      printf("\n DATA BERHASIL DITAMBAHKAN \n");
      return start;
}

struct Buku *delete_beg(struct Buku *start)
{
      struct Buku *ptr;
      ptr = start;

      start = start->next;
      start->prev = NULL;
      free(ptr);
      printf("\n DATA AWAL BERHASIL DIHAPUS! \n");
      return start;
}

struct Buku *delete_end(struct Buku *start)
{
      struct Buku *ptr, *preptr;
      ptr = start;

      while(ptr->next != NULL)
      {
            preptr = ptr;
            ptr = ptr->next;
      }
      preptr->next = NULL;
      free(ptr);
      printf("\n DATA AKHIR BERHASIL DIHAPUS! \n");
      return start;
}

struct Buku *delete_list(struct Buku *start)
{
      struct Buku *ptr;
      if(start != NULL)
      {
            ptr = start;
            while(ptr != NULL)
            {
                  printf("\n %d is to be deleted next", ptr->data);
                  start = delete_beg(ptr);
                  ptr = start;
            }
      }
      return start;
}