#include <stdio.h>
int main()
{
  float a = 9;
  printf("Variabel x bernilai %0.f\n", a);
  float b = 6;
  printf("Variabel y bernilai %0.f\n", b);
  float x = 10;
  printf("Variabel z bernilai %0.f\n", x);
  float y = 7;
  printf("Variabel z bernilai %0.f\n", y);

  float x1 = (a + b) * x / y;
  printf("Hasil dari a ditambah b dikali x dibagi y adalah %.2f\n", x1);
}