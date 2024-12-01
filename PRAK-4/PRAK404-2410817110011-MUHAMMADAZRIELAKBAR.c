#include <stdio.h>
int main()
{
  int Pilihan;
  float NilaiPertama, NilaiKedua;

  while (1)
  {
    printf("Pilih Program \n");
    printf("1. Penjumlahan \n");
    printf("2. Pengurangan \n");
    printf("3. Perkalian \n");
    printf("4. Pembagian \n");
    printf("5. Exit \n");

    printf("Masukkan Pilihan :");
    scanf("%d", &Pilihan);
    if (Pilihan == 5)
    {
      printf("Terimakasih, telah menggunakan kalkulator AZRIELAKBAR \n");
      break;
    }
    if (Pilihan < 1 || Pilihan > 5)
    {
      printf("Input anda salah, silahkan coba lagi \n");
      continue;
    }

    printf("Masukkan nilai Pertama : ");
    scanf("%f", &NilaiPertama);
    printf("Masukkan nilai Kedua : ");
    scanf("%f", &NilaiKedua);

    switch (Pilihan)
    {
    case 1:
      printf("Hasil Penjumlahan antara %.2f dengan %.2f adalah %.2f \n", NilaiPertama, NilaiKedua, NilaiPertama + NilaiKedua);
      break;
    case 2:
      printf("Hasil Pengurangan antara %.2f dengan %.2f adalah %.2f \n", NilaiPertama, NilaiKedua, NilaiPertama - NilaiKedua);
      break;
    case 3:
      printf("Hasil Perkalian antara %.2f dengan %.2f adalah %.2f \n", NilaiPertama, NilaiKedua, NilaiPertama * NilaiKedua);
      break;
    case 4:
      if (NilaiKedua = 0)
      {
        printf("Hasil Pembagian antara %.2f dengan %.2f adalah %.2f \n", NilaiPertama, NilaiKedua, NilaiPertama / NilaiKedua);
      }
      else
      {
        printf("Nilai tidak terdefinisi");
      }
      break;
    }
  }
}