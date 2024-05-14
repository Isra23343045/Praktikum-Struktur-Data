#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 20

char stack[MAX];
int top = -1;

void push(char c) {
    if (top < MAX - 1) {
        stack[++top] = c;
    } else {
        printf("Stack overflow\n");
    }
}

char pop() {
    if (top >= 0) {
        return stack[top--];
    } else {
        printf("Stack underflow\n");
        return '\0';
    }
}

void input_kata() {
    char kata[MAX];
    top = -1;
    printf("Masukkan kata: ");
    fgets(kata, sizeof(kata), stdin);
    kata[strcspn(kata, "\n")] = '\0';

    for (int i = 0; i < strlen(kata); i++) {
        push(kata[i]);
    }
}

void balik_kata() {
    if (top == -1) {
        printf("Tidak ada kata yang diinputkan.\n");
        return;
    }

    printf("Kata yang dibalik: ");
    while (top != -1) {
        printf("%c", pop());
    }
    printf("\n");
}

int main() {
    int pilihan;
    while (1) {
        printf("\n\n***** MENU *****\n");
        printf("1. Input Kata\n2. Balik Kata\n3. Exit\n");
        printf("Masukkan pilihanmu: ");
        scanf("%d", &pilihan);
        getchar();

        switch (pilihan) {
        case 1:
            input_kata();
            break;
        case 2:
            balik_kata();
            break;
        case 3:
            exit(0);
        default:
            printf("\nPilihan tidak valid! Silakan coba lagi!\n");
        }
    }

    return 0;
}
