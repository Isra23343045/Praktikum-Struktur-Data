#include <stdio.h>
#include <stdlib.h>

//instertion at beginning

struct Node
{
      int data;
      struct Node *next;
};

void print(struct Node *node)
{
      while(node != NULL)
      {
            printf(" %d ",node->data);
            node = node->next;
      }
}

int main()
{
      struct Node *head = NULL;
      struct Node *second = NULL;
      struct Node *third = NULL;
      struct Node *new_node = NULL;

      head = (struct Node*) malloc(sizeof(struct Node));
      second = (struct Node*) malloc(sizeof(struct Node));
      third = (struct Node*) malloc(sizeof(struct Node));
      new_node = (struct Node*) malloc(sizeof(struct Node));

      head->data = 1;
      head->next = second;

      second->data = 2;
      second->next = third;

      third->data = 3;
      third->next = new_node;

      new_node->data = 4;
      new_node->next = head;
      head = new_node;

      print(head);
      return 0;
      

}
