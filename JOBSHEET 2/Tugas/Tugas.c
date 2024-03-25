#include <stdio.h>

typedef struct mahasiswa
{
      int NIM,tanggal_lahir;
      char Nama[20];
      double ipk;
}MHS;

char inputdata(MHS *mahasiswa1)
{
      printf("masukkan nim : ");
      scanf("%d",&mahasiswa1->NIM);
      getchar();
      printf("masukkan Nama : ");
      fgets(mahasiswa1->Nama, sizeof(mahasiswa1->Nama), stdin);
      printf("masukkan tanggal lahir : ");
      scanf("%d",&mahasiswa1->tanggal_lahir);
      printf("masukkan ipk : ");
      scanf("%lf",&mahasiswa1->ipk);
}

void tampilkan_data(MHS mahasiswa1)
{
      printf("nama\t : %s",mahasiswa1.Nama);
      printf("NIM\t  : %d\n",mahasiswa1.NIM);
      printf("tanggal lahir\t : %d\n",mahasiswa1.tanggal_lahir);
      printf("IPK : %lf\n",mahasiswa1.ipk);
}

int main()
{
      MHS mahasiswa1;
      inputdata(&mahasiswa1);
      tampilkan_data(mahasiswa1);

      return 0;
}
