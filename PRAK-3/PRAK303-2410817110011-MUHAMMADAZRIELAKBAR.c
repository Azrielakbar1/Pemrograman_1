#include <stdio.h>
int main()
{
  int nilai;
  printf("");
  scanf("%d", &nilai);

  if (nilai < 0)
  {
    printf("negatif");
  }
  else if (nilai > 0)
  {
    printf("positif");
  }
  else if (nilai == 0)
  {
    printf("nol");
  }
  else
  {
    printf("error");
  }
}