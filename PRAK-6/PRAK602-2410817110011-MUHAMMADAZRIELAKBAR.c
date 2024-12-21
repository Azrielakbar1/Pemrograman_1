#include <stdio.h>
int main()
{
  int jumlah;
  printf("");
  scanf("%d", &jumlah);
  int zetsu[jumlah];
  for (int a = 0; a < jumlah; a++)
  {
    scanf("%d", &zetsu[a]);
    printf("%d ", zetsu[a] * (a + 1));
  }
}
