#include <stdio.h>
int panjang_kalimat(char kalimat[])
{
  int panjang = 0;
  while (kalimat[panjang] != '\0')
    panjang++;
  return panjang;
}
int main()
{
  char kode[100];
  char pesan[100];
  int bintang = 0, pagar = 0;
  scanf(" %[^\n]", kode);
  scanf(" %[^\n]", pesan);
  if (panjang_kalimat(kode) != panjang_kalimat(pesan))
  {
    printf("Panjang kalimat berbeda, pesan palsu");
    return 1;
  }
  for (int i = 0; i < panjang_kalimat(kode); i++)
  {
    if (kode[i] == ' ' && pesan[i] == ' ')
    {
      continue;
    }
    if (kode[i] == pesan[i])
    {
      printf("*");
      bintang++;
    }
    else
    {
      printf("#");
      pagar++;
    }
  }
  printf("\n* = %d \n", bintang);
  printf("# = %d \n", pagar);
  if (bintang >= pagar)
  {
    printf("Pesan Asli\n");
  }
  else
  {
    printf("Pesan Palsu\n");
  }
  return 0;
}