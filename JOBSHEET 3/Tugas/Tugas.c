#include <stdio.h>
#include <stdlib.h>

//1.)
// struct node
// {
//       int data;
//       struct node* next;
// };

// void print(struct node* head)
// {
//        while(head != NULL)
//       {
//             printf("% d ",head->data);
//             head = head->next;
//       }
// }

// int main()
// {
//       struct node* head = NULL;
//       struct node* first = NULL;
//       struct node* fibbonachi = NULL;

//       head =(struct node*)malloc(sizeof(struct node));
//       first = (struct node*)malloc(sizeof(struct node));
//       fibbonachi = (struct node*)malloc(sizeof(struct node));

//       if (head == NULL || first == NULL || fibbonachi == NULL)
//       {
//             printf("gagal melakukan alokasi memori.\n");
//             return 1;
//       }

//       head->data = 0;
//       head->next = first;

//       first->data = 1;
//       first->next = fibbonachi;

//       fibbonachi->next = NULL;

//       int n;
//       printf("bilangan f sampai :");
//       scanf("%d",&n);

//       for(int i = 0;i < n-2;i++)
//       {
//             fibbonachi->data = head->data + first->data;
//             head->data = first->data;
//             first->data = fibbonachi->data;
            
//             if (fibbonachi == NULL)
//             {
//             printf("Gagal melakukan alokasi memori.\n");
//             return 1;
//             }

//       }
      
//       printf(" %d ", fibbonachi->data);
//       free(head);
//       free(first);
//       free(fibbonachi);

//       return 0;
// }









//2.)

// struct node
// {
//       int data;
//       struct node* next;
// };

// void push(struct node** head_ref, int new_data,int size)//menambah node pada awal linked list
// {
//       struct node* new_node = (struct node*)malloc(sizeof(struct node));
//       new_node =(struct node*)realloc(new_node, size * sizeof(struct node));
      
//       new_node->data = new_data;
//       new_node->next = (*head_ref);
//       (*head_ref) = new_node;
// }

// void printlist(struct node* node, int range)
// {
//     int i = 0;
//     while (i < range && node != NULL)
//     {
//         printf(" %d ", node->data);
//         node = node->next;
//         i++;
//     }
// }

// int main()
// {
//       struct node* head = NULL;
//       int list_number[100];
//       int list_prime[100];
//       int data,memory_size;
      
//       printf("masukkan bilangan prima ke-n : ");
//       scanf("%d",&data);

//       printf("masukkan ukuran data dalam byte : ");
//       scanf("%d",&memory_size);
      
//       for(int i = 0;i < data; i++)
//       {
//             list_number[i] = i+1;
//       }
      
//       int count;
      
//       for (int i = data; i > 0; i--) 
//       {
//             count = 0;
//             for (int j = 1; j <= list_number[i]; j++) 
//             {
//                   if (list_number[i] % j == 0) {
//                   count++;
//                   }
//             }
//             if (count == 2) 
//             { 
//                  push(&head, list_number[i], memory_size);
//             }
//       }

//       printlist(head, data);

//       return 0;
// }