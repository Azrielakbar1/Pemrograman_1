#include <stdio.h>
int main()
{
  int a = 9;
  printf("Variabel x bernilai %d\n", a);
  int b = 5;
  printf("Variabel x bernilai %d\n", b);
  int x = 8;
  printf("Variabel x bernilai %d\n", x);
  int y = 8;
  printf("Variabel x bernilai %d\n", y);

  int x1 = (a % b) + (x % y);
  printf("Total sisa bagi dari a dibagi b dan x dibagi y adalah %d\n", x1);
}