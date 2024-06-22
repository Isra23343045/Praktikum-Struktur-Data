#include <stdio.h>
#include <stdlib.h>

struct Buku
{
      int no_pol;
      struct Buku *next;
};

void display(struct Buku* head)
{
      struct Buku *temp = head;
      printf("\n \nUrutan parkiran : - \n");
      while(temp != NULL)
      {
            printf("%d --->", temp->no_pol);
            temp = temp->next;
      }
}

void insertAtfront(struct Buku** headRef, int value)
{
      struct Buku* head = *headRef;

      struct Buku *newnode;
      newnode = (struct Buku*)malloc(sizeof(struct Buku));
      newnode->no_pol = value;
      newnode->next = head;
      head = newnode;

      *headRef = head;
}

int main()
{
      struct Buku *head;
      struct Buku *avanza = NULL;
      struct Buku *hilux = NULL;
      struct Buku *kijangF1 = NULL;

      avanza =(struct Buku*)malloc(sizeof(struct Buku));
      hilux = (struct Buku*)malloc(sizeof(struct Buku));
      kijangF1 = (struct Buku*)malloc(sizeof(struct Buku));

      avanza->no_pol = 1234;
      hilux->no_pol = 2345;
      kijangF1->no_pol = 3456;
      // Connect nodes
      avanza->next = hilux;
      hilux->next = kijangF1;
      kijangF1->next = NULL;
      // save address of first node in head
      head = avanza;
      insertAtfront(&head, 46543);
      display(head);
}