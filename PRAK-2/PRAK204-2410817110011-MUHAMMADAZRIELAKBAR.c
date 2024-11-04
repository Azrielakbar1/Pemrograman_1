#include <stdio.h>
#define PI 22.0 / 7.0
int main()
{
  float jari_jari, tinggi, volume, luas_permukaan, keliling;
  // Input
  printf("");
  scanf("%f", &jari_jari);
  printf("");
  scanf("%f", &tinggi);

  // Menghitung volume
  volume = PI * jari_jari * jari_jari * tinggi;

  // Menghitung luas permukaan
  luas_permukaan = 2 * PI * jari_jari * (jari_jari + tinggi);

  // Menghitung keliling
  keliling = 2 * PI * jari_jari;

  // Menampilkan hasil
  printf("Volume = %.2f\n", volume);
  printf("Luas = %.2f\n", luas_permukaan);
  printf("Keliling = %.2f\n", keliling);

  float jari_jari1, tinggi1, volume1, luas_permukaan1, keliling1;
  // Input
  printf("");
  scanf("%f %f", &jari_jari1, &tinggi1);

  // Menghitung volume
  volume1 = PI * jari_jari1 * jari_jari1 * tinggi1;

  // Menghitung luas permukaan
  luas_permukaan1 = 2 * PI * jari_jari1 * (jari_jari1 + tinggi1);

  // Menghitung keliling
  keliling1 = 2 * PI * jari_jari1;

  // Menampilkan hasil
  printf("Volume = %.2f\n", volume1);
  printf("Luas = %.2f\n", luas_permukaan1);
  printf("Keliling = %.2f\n", keliling1);
}