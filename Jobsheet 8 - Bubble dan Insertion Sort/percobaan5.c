#include <stdio.h>
#include <stdbool.h>

#define MAX 7

int intArray[MAX] = {4, 6, 3, 2, 1, 9, 7};

void printline(int count)
{
      int i;
      printf("\n");

      for(i = 0; i < count - 1;i++)
      {
            printf("=");
      }

      printf("=\n");
}

void display()
{
      int i;
      
      // navigate through all items
      for (i = 0;i < MAX; i++)
      {
            printf("%d ",intArray[i]);
      }
}

void insertionsort()
{
      int valueToinsert, holeposition, i;

      // loop through all numbers
      for(i = 1; i < MAX; i++)
      {
            //select a value to be inserted.
            valueToinsert = intArray[i];

            // select the hole position where number is to be inserted
            holeposition = i;

            // check if previous number is larger than value to be inserted
            while (holeposition > 0 && intArray[holeposition - 1] > valueToinsert)
            {
                  intArray[holeposition] = intArray[holeposition - 1];
                  holeposition--;
                  printf(" item moved : %d\n", intArray[holeposition]);
            }

            if(holeposition != i)
            {
                  printf(" item inserted : %d, at position : %d\n", valueToinsert, holeposition);
                  // insert the number at hole position
                  intArray[holeposition] = valueToinsert;
            }
            printf("Iteraion %d# : ",i);
            display();
      }

      
}

int main()
{
      printf("Input Array : ");
      display();
      printline(50);
      insertionsort();
      printf("Output Array : ");
      display();
      printline(50);

      return 0;
}