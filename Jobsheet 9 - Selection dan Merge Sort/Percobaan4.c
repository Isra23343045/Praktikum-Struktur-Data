#include <stdio.h>
#include <stdbool.h>
#define MAX 7

int intarray[MAX] = {4, 6, 3, 2, 1, 9, 7};

void printline(int count)
{
      int i;
      for (i = 0; i < count - 1; i++)
      {
            printf("=");
      }

      printf("=\n");
}

void display()
{
      int i;
      printf("[");

      // navigate through all items
      for (i = 0; i < MAX; i++)
      {
            printf("%d ", intarray[i]);
      }

      printf("]\n");
}

void selectionsort()
{
      int indexmin, i, j;
      // loop through all numbers
      for (i = 0; i < MAX - 1; i++)
      {
            // set current element as minimum
            indexmin = i;

            // check the element to be minimum
            for (j = i + 1; j < MAX; j++)
            {
                  if(intarray[j] < intarray[indexmin])
                  {
                        indexmin = j;
                  }
            }

            if (indexmin != i)
            {
                  printf("Items swapped: [ %d, %d]\n", intarray[i], intarray[indexmin]);

                  // swap the numbers
                  int temp = intarray[indexmin];
                  intarray[indexmin] = intarray[i];
                  intarray[i] = temp;
            }

            printf("Iteraion %d#: ", (i + 1));
            display();
      }
}

int main()
{
      printf("Input array : ");
      display();
      printline(50);
      selectionsort();
      printf("Output Array: ");
      display();
      printline(50);

      return 0;
}