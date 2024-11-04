#include <stdio.h>
int main()
{
  float x, y;
  printf("Masukkan Nilai Pertama: ");
  scanf("%f", &x);

  printf("Masukkan Nilai Kedua: ");
  scanf("%f", &y);

  printf("Hasil dari penjumlahan nilai pertama \"%0.f\" dan nilai kedua \"%.1f\" adalah \"%.2f\" \n", x, y, x + y);

  float x1, y1;
  printf("Masukkan Nilai Pertama: ");
  scanf("%f", &x1);

  printf("Masukkan Nilai Kedua: ");
  scanf("%f", &y1);

  printf("Hasil dari penjumlahan nilai pertama \"%.2f\" dan nilai kedua \"%.1f\" adalah \"%.2f\"", x1, y1, x1 + y1);
}