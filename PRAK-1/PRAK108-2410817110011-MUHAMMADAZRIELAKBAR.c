#include <stdio.h>
int main()
{
  printf("Diketahui :\n");

  int putaran = 5;
  printf("Pak Dengklek mengelilingi taman = %d Putaran\n", putaran);
  float jarak = 14;
  float pi = 3.14;
  printf("Jarak tempuh Pak Dengklek = %.0f Kilometer\n\n", jarak);
  printf("Jawaban :\n");

  float keliling_satu_putaran = jarak / putaran;
  float jari = keliling_satu_putaran / (2 * pi);
  printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah %.2f Kilometer", jari);
}