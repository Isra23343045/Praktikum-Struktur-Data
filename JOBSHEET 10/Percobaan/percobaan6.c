#include <stdio.h>
#include <stdlib.h>
#define MAX 10
#define MaaxStack 10

int Data[MAX]; // {12,35,9,11,3,17,23,15,31,20}

// prosedur menukar data
void Tukar (int *a, int *b)
{
      int temp;
      temp = *a;
      *a = *b;
      *b = temp;
}

// Prosedur pengurutan metode Quick Sort
void QuickSortNonRekursif()
{
      struct tump
      {
            int kiri;
            int kanan;
      }Tumpukan[MaaxStack];
      int i, j , L, R, x, ujung = 1;
      Tumpukan[1].kiri = 0;
      Tumpukan[1].kanan = MAX - 1;
      while(ujung != 0)
      {
            L = Tumpukan[ujung].kiri;
            R = Tumpukan[ujung].kanan;
            ujung--;
            while(R > L)
            {
                  i = L;
                  j = R;
                  x = Data[ (L + R) / 2];
                  while(i <= j)
                  {
                        while(Data[i] < x)
                        {
                              i++;
                        }
                        while(x < Data[j])
                        {
                              j--;
                        }
                        if(i <= j)
                        {
                              Tukar(&Data[i], &Data[j]);
                              i++;

                              j--;
                        }
                  }
                  if(L < i)
                  {
                        ujung++;
                        Tumpukan[ujung].kiri = i;
                        Tumpukan[ujung].kanan = R;
                  }
                  R = j;
            }
      }
}

int main()
{
      int i;
      srand(0);

      // membangkitkan bilangan acak
      printf("DATA SEBELUM TERURUT");
      for(i = 0; i < MAX; i++)
      {
            Data[i] = (int) rand()/ 1000+1;
            printf("\nData ke%d : %d ", i, Data[i]);
      }
      QuickSortNonRekursif();
      // Data setelah terurut
      for(i = 0; i < MAX; i++)
      {
            printf("\nData ke%d : %d ", i, Data[i]);
      }
}