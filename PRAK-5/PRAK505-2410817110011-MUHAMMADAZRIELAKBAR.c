#include <stdio.h>

void Biodata(int tahun_lahir, char Namaku[], char Asal[])
{
  int tahun_ini = 2020;
  int umur = tahun_ini - tahun_lahir;

  printf("Perkenalkan Nama Saya : %s\n", Namaku);
  printf("Umur Saya : %d\n", umur);
  printf("Saya Adalah Angkatan : %d\n", tahun_ini);
  printf("Asal Saya dari : %s\n", Asal);
}

int main()
{
  int tahunLahir;
  char A[20], B[15];

  scanf(" %d", &tahunLahir);
  scanf(" %[^\n]%*c", &A);
  scanf(" %[^\n]%*c", &B);

  Biodata(tahunLahir, A, B);
}