//Deklarasi Double linked list
#include <stdio.h>
#include <stdlib.h>

struct Node
{
      int value;
      struct Node *next;
      struct Node *prev;
};

struct Node *head = NULL;
struct Node *tail = NULL;
struct Node *current;

int main()
{
      current = (struct Node*)malloc(sizeof(struct Node));
      current->value = 1;
      current->next = NULL;
      current->prev = NULL;
      
      head = tail = current;
      return 0;
}