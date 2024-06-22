#include <stdio.h>
#include <stdlib.h>

// A binary tree node has data, pointer to left child and pointer to right child

struct node
{
      int data;
      struct node* left;
      struct node* right;
};

// helper function that allocates aa new node with the given data nd NULL left and right pointers.

struct node* newNode(int data)
{
      struct node* node = (struct node*)malloc(sizeof(struct node));
      node->data = data;
      node->left = NULL;
      node->right = NULL;

      return(node);
}

// given aa binary tree, print its nodes according to the bottom up postorder traversal
void printPostorder(struct node* node)
{
      if(node == NULL)
      {
            return;
      }

      // first recur on left subree
      printPostorder(node->left);

      //then recur on right subtree
      printPostorder(node->right);

      //now deal with the node
      printf("%d", node->data);
}

// given a binary tree, prin its nodes in inorder
void printInorder(struct node* node)
{
      if(node == NULL)
      {
            return;
      }

      // first recur no left child
      printInorder(node->left);

      //then print the data of node
      printf("%d", node->data);

      //now recuron right child
      printInorder(node->right);
}

// Given a binary tree, print its nodes in preorder
void printPreorder(struct node* node)
{
      if(node == NULL)
      {
            return;
      }

      //first print data of node
      printf("%d", node->data);

      //the recur on left sutree
      printPreorder(node->left);

      //now recur on right subtree
      printPreorder(node->right);
}

// Driver program to test above functions
int main()
{
      struct node *root = newNode(1);
      root->left = newNode(2);
      root->right = newNode(3);
      root->left->left = newNode(4);
      root->left->right = newNode(5);

      printf("\nPreorder traversal of binary tree is \n");

      printPreorder(root);

      printf("\nInorder traversl of binary tree is\n");
      printInorder(root);

      printf("\nPostorder trabersl of binary tree is\n");
      printPostorder(root);

      getchar();
      return 0;
}