#include <stdio.h>
#include <string.h>

//6.ADT(Abstarct Data Type)
typedef int angka;
typedef char huruf;

int main()
{
      angka umur;
      huruf h;
      huruf nama[10];

      printf("Masukkan umur anda : ");scanf("%d",&umur);
      printf("Umur anda adalah %d",umur);
      printf("\nMasukkan huruf : "); h=getchar();
      printf("\nHuruf anda %c",h);
      printf("\nMasukkan nama : ");fgets(nama, 50, stdin);
      printf("Nama anda %s",nama);
      getchar();
}