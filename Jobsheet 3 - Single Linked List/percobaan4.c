#include <stdio.h>
#include <stdlib.h>

//menampilkan  link list
typedef struct LinkedList {
    int data;
    struct LinkedList* next;
} node;

void printList(node* n)
{
    while (n != NULL) {
        printf(" %d ", n->data);
        n = n->next;
    }
}

int main()
{
    node* head = NULL;
    node* second = NULL;
    node* third = NULL;

    head = (node*)malloc(sizeof(node));
    second = (node*)malloc(sizeof(node));
    third = (node*)malloc(sizeof(node));

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL;

    printList(head);

    // Free allocated memory
    free(head);
    free(second);
    free(third);

    return 0;
}
