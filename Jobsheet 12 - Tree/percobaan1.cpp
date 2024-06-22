#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <iomanip>
using namespace std;

struct tree_node {
    tree_node* left;
    tree_node* right;
    string nomor;
    string nama;
    string nim;
    string email;
};

tree_node* root = NULL;

bool isEmpty() {
    return root == NULL;
}

void insert(string no, string nm, string n, string ml) {
    tree_node* t = new tree_node;
    t->nomor = no;
    t->nama = nm;
    t->nim = n;
    t->email = ml;
    t->left = NULL;
    t->right = NULL;

    if (isEmpty()) {
        root = t;
    } else {
        tree_node* curr = root;
        tree_node* parent = NULL;

        while (curr != NULL) {
            parent = curr;
            if (t->nomor < curr->nomor) {
                curr = curr->left;
            } else {
                curr = curr->right;
            }
        }

        if (t->nomor < parent->nomor) {
            parent->left = t;
        } else {
            parent->right = t;
        }
    }
}

void inorder(tree_node* p) {
    if (p != NULL) {
        if (p->left) inorder(p->left);
        cout << " | " << p->nomor << " | " << p->nama << " | " << p->nim << " | " << p->email << endl;
        if (p->right) inorder(p->right);
    }
}

void postorder(tree_node* p) {
    if (p != NULL) {
        postorder(p->left);
        postorder(p->right);
        cout << " | " << p->nomor << " | " << p->nama << " | " << p->nim << " | " << p->email << endl;
    }
}

void preorder(tree_node* p) {
    if (p != NULL) {
        cout << " | " << p->nomor << " | " << p->nama << " | " << p->nim << " | " << p->email << endl;
        preorder(p->left);
        preorder(p->right);
    }
}

void print_inorder() {
    inorder(root);
}

void print_postorder() {
    postorder(root);
}

void print_preorder() {
    preorder(root);
}

int height(tree_node* root) {
    if (root == NULL)
        return -1;
    else {
        int left_height = height(root->left);
        int right_height = height(root->right);
        return max(left_height, right_height) + 1;
    }
}

int main() {
    int ch;

    while (true) {
        system("cls");
        cout << endl;
        cout << "Menu Utama operasi pohon biner" << endl;
        cout << "-------------------------" << endl;
        cout << "1. Insert/tambah data" << endl;
        cout << "2. kunjungan in-order" << endl;
        cout << "3. kunjungan pre-order" << endl;
        cout << "4. kunjungan post-order" << endl;
        cout << "5. Exit" << endl;
        cout << "pilihan Anda: ";
        cin >> ch;
        cout << endl;

        switch (ch) {
            case 1: {
                string x, tmp, t, o;
                cout << "- NOMOR : ";
                cin >> x;
                cout << "- Nama : ";
                cin >> tmp;
                cout << "- NIM : ";
                cin >> t;
                cout << "- Email : ";
                cin >> o;
                insert(x, tmp, t, o);
                break;
            }
            case 2: {
                cout << endl << "kunjungan in-Order" << endl;
                cout << "----------------" << endl;
                cout << "-----------------------------" << endl;
                cout << " | No | " << setw(10) << " NAMA " << setw(15) << " | " << setw(5) << " NIM " << setw(10) << " | " << setw(10) << " e-MAIL " << setw(10) << " | " << endl;
                cout << "----------------" << endl;
                print_inorder();
                getch();
                break;
            }
            case 3: {
                cout << "kunjungan pre-Order" << endl;
                cout << "----------------" << endl;
                cout << "-----------------------------" << endl;
                cout << " | No | " << setw(10) << " NAMA " << setw(15) << " | " << setw(5) << " NIM " << setw(10) << " | " << setw(10) << " e-MAIL " << setw(10) << " | " << endl;
                cout << "----------------" << endl;
                print_preorder();
                getch();
                break;
            }
            case 4: {
                cout << endl << "kunjungan post-Order" << endl;
                cout << "----------------" << endl;
                cout << "-----------------------------" << endl;
                cout << " | No | " << setw(10) << " NAMA " << setw(15) << " | " << setw(5) << " NIM " << setw(10) << " | " << setw(10) << " e-MAIL " << setw(10) << " | " << endl;
                cout << "----------------" << endl;
                print_postorder();
                getch();
                break;
            }
            case 5:
                return 0;
            default:
                cout << "Pilihan yang anda masukkan salah!" << endl;
                getch();
                break;
        }
    }
}
