#include <stdio.h>
int main()
{
  int a = 4;
  printf("Variabel a bernilai %d\n", a);
  int b = 8;
  printf("Variabel b bernilai %d\n", b);
  int c = 3;
  printf("Variabel c bernilai %d\n", c);

  float x1 = a * b;
  float x2 = x1 / c;
  printf("Hasil dari a dikali b dibagi c adalah %f", x2);
}