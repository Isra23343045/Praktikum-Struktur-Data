#include <stdio.h>
#include <stdlib.h>

#define ukuran 6
int queue[ukuran]; //deklarasi array
int front = -1;
int rear = -1;

// fungsi untuk menambahkan elemen pada circular queue
void enqueue(int element)
{
      if(front == -1 && rear == -1) // kondisi untuk cek apakah queue kosong
      {
            front = 0;
            rear = 0;
            queue[rear] = element;
      }
      else if ((rear + 1)%ukuran == front) //kondisi untuk cek apakah queue penuh
      {
            printf("Antrian telah penuh..");
      }
      else
      {
            rear = (rear+1)%ukuran; // nilai pada rear bertamabah;
            queue[rear] = element; // memberikan nilai pada queue posisi rear
      }
}

// fungsi untuk menghapus elemen dari queue
void dequeue()
{
      if((front == -1) && (rear== - 1)) // kondisi untuk mengecek apakah queue kosong
      {
            printf("\nQueue belum penuh...");
      }
      else if(front == rear)
      {
            printf("\nElemen yang di-dequeue adalah %d  ",queue[front]);
            front =-1;
            rear = -1;
      }
      else
      {
            printf("\nElemen yang di-dequeue adalah %d  ",queue[front]);
            front = (front + 1)%ukuran;
            if (front == 0) // Perbarui rear jika front kembali ke 0 setelah menghapus elemen terakhir
                  rear = -1;
      }
}

// fungsi untuk menampilkan elemen queue
void display()
{
      int i = front;
      if(front == -1 && rear == -1)
      {
            printf("\n Queue kosong!!..");
      }
      else
      {
            printf("\nElemen pada queue adalah : ");
            while(i != rear)
            {
                  printf("%d, ",queue[i]);
                  i = (i + 1)%ukuran;
            }
            printf("%d", queue[rear]); // Tampilkan elemen terakhir
      }
}

int main()
{
      int pilihan, x;
      while (1)
      {
            printf("\n******************MAIN MENU********************\n");
            printf("\n=================================================================\n"); 
            printf("\n1.Tambah sebuah elemen\n2.hapus sebuahelemen\n3.Tampilkan antrian\n4.Keluar\n"); 
            printf("\nMasukan pilihanmu ?"); 
            scanf("%d",&pilihan);
            switch (pilihan)
            {
            case 1:
                  printf("Silahkan masukan elemen yang ingin kamu tambah : ");
                  scanf("%d",&x);
                  enqueue(x);
                  break;
            case 2:
                  dequeue();
                  break;
            case 3:
                  display();
                  break;
            case 4:
                  exit(0);
                  break;
            
            default:
                  printf("masukkan pilihan yang tepat!");
            }
      }

      return 0;
}
