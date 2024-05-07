#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <malloc.h>

struct Buku
{
      int data;
      struct Buku *next;
};

struct Buku *start = NULL;
struct Buku *create_linked_list(struct Buku *); 
struct Buku *display(struct Buku *);
struct Buku *insert_beg(struct Buku *); 
struct Buku *insert_end(struct Buku *); 
struct Buku *insert_before(struct Buku *); 
struct Buku *insert_after(struct Buku *); 
struct Buku *delete_beg(struct Buku *); 
struct Buku *delete_end(struct Buku *); 
struct Buku *delete_node(struct Buku *); 
struct Buku *delete_after(struct Buku *); 
struct Buku *delete_list(struct Buku *); 
struct Buku *sort_list(struct Buku *);

int main(int argc, char *argv[])
{
      int option;
      do
      {
            printf("\n\n ======= SINGLE LINKED LIST =======\n");
            printf("\n 1: Buat single linked list");
            printf("\n 2: Tampilkan semua node single linked list ");
            printf("\n 3: Tambah node di awal single linked list ");
            printf("\n 4: Tambah node di akhir single linked list");
            printf("\n 5: Tambah node sebelum node yang diberikan");
            printf("\n 6: tambah node setelah node yang diberikan");
            printf("\n 7: Hapus node di awal single linked list");
            printf("\n 8: Hapus node di akhir single linked list");
            printf("\n 9: Hapus sebuah node tertentu");
            printf("\n 10: Hapus node setelah node yang diberikan");
            printf("\n 11: Hapus semua node single linked list");
            printf("\n 12: Urutkan data single linked list");
            printf("\n 13: Keluar dari program");
            printf("\n\n masukkan pilihan menu : ");
            scanf("%d", &option);

            switch(option)
            {
                  case 1:
                        system("cls");
                        start = create_linked_list(start);
                        printf("\n LINKED LIST CREATED");
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
                        system("cls");
                        start = delete_node(start);
                        break;
                  
                  case 10:
                        system("cls");
                        start = delete_after(start);
                        break;
                  
                  case 11:
                        system("cls");
                        start = delete_list(start);
                        break;

                  case 12:
                        system("cls");
                        start = sort_list(start);
                        break;
            }


      } while (option != 13);
      getchar();
      return 0;
      
}

struct Buku *create_linked_list(struct Buku *start)
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
                  start = new_node;
            }
            else
            {
                  ptr = start;
                  while(ptr->next != NULL)
                  {
                        ptr = ptr->next;
                        ptr->next = new_node;
                        new_node->next = NULL;
                  }
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
      printf(" DATA SINGLE LINKED LIST \n\n");
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
      new_node->next = start;
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
      }
      printf("\n DATA BERHASIL DITAMBAHKAN \n");
      return start;
}

struct Buku *insert_before(struct Buku *start)
{
      struct Buku *new_node, *ptr, *preptr;
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
            preptr = ptr;
            ptr = ptr->next;
      }
      preptr->next = new_node;
      new_node->next = ptr;
      printf("\n DATA BERHASIL DITAMBAHKAN! \n");
      return start;
}

struct Buku *insert_after(struct Buku *start)
{
      struct Buku *new_node, *ptr, *preptr;
      int num, val;
      printf(" TAMBAH DATA SETELAH NODE TERTENTU \n\n");
      printf("\n Masukan data : ");
      scanf("%d", &num);
      printf("\n Data baru ditambahkan setelah node dengan data : ");
      scanf("%d", &val);

      new_node = (struct Buku *)malloc(sizeof(struct Buku));
      new_node->data = num;
      ptr = start;
      preptr = ptr;

      while(preptr->data != val)
      {
            preptr = ptr;
            ptr = ptr->next;
      }

      preptr->next = new_node;
      new_node->next = ptr;
      printf("\n DATA BERHASIL DITAMBAHKAN \n");
      return start;
}

struct Buku *delete_beg(struct Buku *start)
{
      struct Buku *ptr;
      ptr = start;

      start = start->next;
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

struct Buku *delete_node(struct Buku *start)
{
      struct Buku *ptr, *preptr;
      int val;
      printf("\n HAPUS DATA TERTENTU SINGLE LINKED LIST \n");
      printf("\n Masukan data node yang ingin dihapus : ");
      scanf("%d", &val);

      ptr = start;

      if(ptr->data == val)
      {
            start = delete_beg(start);
            return start;
      }
      else
      {
            while(ptr->data != val)
            {
                  preptr = ptr;
                  ptr = ptr->next;
            }
            preptr->next = ptr->next;
            free(ptr);
            printf("\n DATA BERHASIL DIHAPUS! \n");
            return start;
      }
}

struct Buku *delete_after(struct Buku *start)
{
      struct Buku *ptr, *preptr;
      int val;
      printf("\n HAPUS DATA AWAL SINGLE LINKED LIST \n");
      printf("\n Masukan data setelah node yang akan dihapus : ");
      scanf("%d", &val);
      ptr = start;

      while(ptr->data != val)
      {
            ptr = ptr->next;
            preptr = ptr->next;
            ptr->next = preptr->next;
            preptr->next = ptr;
            free(preptr);
      }
      printf("\n DATA BERHASIL DIHAPUS! \n");
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

struct Buku *sort_list(struct Buku *start)
{
      printf("\n DATA SINGLE LINKED LIST SUDAH TERURUT DARI K > B! \n");
      struct Buku *ptr1, *ptr2;
      int temp;
      ptr1 = start;

      while(ptr1->next != NULL)
      {
            ptr2 = ptr1->next;
            while(ptr2 != NULL)
            {
                  if(ptr1->data > ptr2->data)
                  {
                        temp = ptr1->data;
                        ptr1->data = ptr2->data;
                        ptr2->data = temp;
                  }
                  ptr2 = ptr2->next;
            }
            ptr1 = ptr1->next;
      }
      return start;
}