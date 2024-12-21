#include <stdio.h>

int main()
{
  int n1, n2;
  printf("");
  scanf("%d %d", &n1, &n2);
  if (n1 != n2)
  {
    printf("Jumlah tidak sama.\n");
    return 0;
  }
  int baris1[n1], baris2[n2], hasil;
  printf("");
  for (int i = 0; i < n1; i++)
  {
    scanf("%d", &baris1[i]);
  }
  for (int i = 0; i < n2; i++)
  {
    scanf("%d", &baris2[i]);
  }
  printf("");
  for (int i = 0; i < n1; i++)
  {
    hasil = baris1[i] * baris2[i];
    printf("%d ", hasil);
  }
}
