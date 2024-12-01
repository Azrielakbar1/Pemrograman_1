#include <stdio.h>
int main()
{
  int angka;
  scanf("%d", &angka);
  for (int i = 1; i <= angka; i += 2)
  {
    printf("%d ", i);
  }
  printf("\n");
  if (angka % 2 != 0)
  {
    angka--;
  }
  for (int i = angka; i >= 2; i -= 2)
  {
    printf("%d ", i);
  }
}