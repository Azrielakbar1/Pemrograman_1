#include <stdio.h>
int main()
{
  int baris, kolom;
  printf("");
  scanf("%d %d", &baris, &kolom);

  int matriks[baris][kolom];
  for (int a = 0; a < baris; a++)
  {
    for (int b = 0; b < kolom; b++)
    {
      scanf("%d", &matriks[a][b]);
      printf("%d ", matriks[a][b]);
    }
    printf("\n");
  }
}
