#include <stdio.h>
#include <string.h>
//1.ARRAY(contoh 1)
int main()
{
      int rr;
      int nil[3];

      nil[0] = 80;
      nil[1] = 90;
      nil[2] = 100;

      rr = (nil[0] + nil[1] + nil[2]) / 3;
      printf("the average of the 3 grades is %d", rr);
      
      return 0;
}