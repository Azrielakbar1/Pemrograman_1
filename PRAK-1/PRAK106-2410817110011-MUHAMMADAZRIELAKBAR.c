#include <stdio.h>
int main()
{
  int a = 4;
  printf("Variabel x bernilai %d\n", a);
  int b = 8;
  printf("Variabel x bernilai %d\n", b);
  int c = 3;
  printf("Variabel x bernilai %d\n", c);

  int x1 = (a == b);
  int x2 = (b > c);
  int x3 = (a != c);

  printf("Apakah a sama dengan b ? jawabannya adalah %d\n", x1);
  printf("Apakah b lebih besar dari c ? jawabannya adalah %d\n", x2);
  printf("Apakah a tidak sama dengan c ? jawabannya adalah %d\n", x3);
}