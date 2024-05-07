#include <stdio.h>
#include <stdlib.h>

// Structure of the node
struct Buku
{
    int data;
    struct Buku *next;
    struct Buku *prev;
};

void insertEnd(struct Buku **start, int value)
{
    //if the list is empty, create a single node
    //circular and doubly list
    if (*start == NULL)
    {
        struct Buku *new_node = (struct Buku *)malloc(sizeof(struct Buku));
        new_node->data = value;
        new_node->next = new_node->prev = new_node;
        *start = new_node;
        return;
    }

    // if list is not empty
    // find the last node
    struct Buku *last = (*start)->prev;
    // create node dynamically
    struct Buku *new_node = (struct Buku *)malloc(sizeof(struct Buku));
    new_node->data = value;

    // start is going to be next of new_node
    new_node->next = *start;
    (*start)->prev = new_node;
    new_node->prev = last;
    last->next = new_node;
}

void display(struct Buku *start)
{
    struct Buku *temp = start;
    printf("\nTraversal in forward direction:\n");
    while (temp->next != start)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("%d ", temp->data);
    printf("\nTraversal in reverse direction:\n");
    struct Buku *last = start->prev;
    temp = last;
    while (temp->prev != last)
    {
        printf("%d ", temp->data);
        temp = temp->prev;
    }
    printf("%d ", temp->data);
}

int main()
{
    //start with the empty list
    struct Buku *start = NULL;
    insertEnd(&start, 5);
    insertEnd(&start, 8);
    insertEnd(&start, 9);
    insertEnd(&start, 3);
    printf("Created circular doubly linked list is: ");
    display(start);
    return 0;
}
