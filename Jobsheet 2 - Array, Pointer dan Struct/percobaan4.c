#include <stdio.h>
#include <string.h>

//4.STRUCT without TYPEDEF
struct Mahasiswa
{
      char nama[50];
      char jurusan[50];
      int nilai;
};


int main()
{
      struct Mahasiswa mhs01;
      strcpy(mhs01.nama, "Muhammad Isra Alfattah");
      strcpy(mhs01.jurusan, "Informatika");
      mhs01.nilai = 95;

      printf("%s adalah mahasiswa jurusan %s, ",mhs01.nama, mhs01.jurusan);
      printf("memperoleh nilai %i\n",mhs01.nilai);
      
      
      
      return 0;
}

