#include <stdio.h>
int main()
{
  printf("Diketahui :\n");
  int x = 4;
  int y = 5;
  int z = 7;
  printf("Panjang sisi segitiga berturut-turut adalah %d,%d, dan %d\n", x, y, z);
  int keliling = x + y + z;
  printf("Keliling Tanah Pak Dengklek %d\n", keliling);
  int harga = 8500;
  printf("Harga tanah Per Meter adalah %d\n", harga);
  printf("Jawaban :\n");
  int biaya = (x * harga) + (y * harga) + (z * harga);
  printf("Biaya yang diperlukan Pak Dengklek adalah : Rp %d\n", biaya);
}