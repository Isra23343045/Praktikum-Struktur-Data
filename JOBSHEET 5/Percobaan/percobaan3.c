#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <malloc.h>

struct node
{
      int data;
      struct node *next;
};

struct node *start = NULL;
struct node *create_linked_list(struct node *); 
struct node *display(struct node *);
struct node *insert_beg(struct node *); 
struct node *insert_end(struct node *); 
struct node *insert_before(struct node *); 
struct node *insert_after(struct node *); 
struct node *delete_beg(struct node *); 
struct node *delete_end(struct node *); 
struct node *delete_node(struct node *); 
struct node *delete_after(struct node *); 
struct node *delete_list(struct node *); 
struct node *sort_list(struct node *);

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

struct node *create_linked_list(struct node *start)
{
      system("cls");
      struct node *new_node, *ptr;
      int num;
      printf("\n Tekan 0 untuk berhenti input data");
      printf("\n Masukan data : ");
      scanf("%d",&num);
      while(num!=0)
      {
            new_node = (struct node*)malloc(sizeof(struct node));
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