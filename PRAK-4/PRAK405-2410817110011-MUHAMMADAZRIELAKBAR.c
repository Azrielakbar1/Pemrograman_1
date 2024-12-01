#include <stdio.h>
int main()
{
  int pengali, kelipatan;
  int total = 0;
  scanf("%d %d", &pengali, &kelipatan);
  for (int i = 1; i <= pengali; i++)
  {
    int jumlah = 0;
    printf("(");
    for (int j = i; j >= 1; j--)
    {
      int nilai = j * kelipatan;
      printf("%d * %d", j, kelipatan);
      jumlah = jumlah + nilai;
      if (j > 1)
        printf(") + (");
    }
    printf(") = %d \n", jumlah);
    total += jumlah;
  }
  printf("%d \n", total);
}