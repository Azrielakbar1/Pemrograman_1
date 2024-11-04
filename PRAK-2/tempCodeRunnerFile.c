#include <stdio.h>
int main()
{
  // test case 1
  int A, B;
  printf("");
  scanf("%d %d", &A, &B);
  // alas
  int alas = (B * B - A * A) / 9;
  printf("Alas = %d cm\n", alas);
  // tinggi
  printf("Tinggi = %d cm\n", A);
  // keliling
  int keliling = A + B + alas;
  printf("Keliling = %d cm\n", keliling);
  // luas
  int luas = 0.5 * alas * A;
  printf("Luas = %d^2 cm", luas);

  // test case 2
  int A1, B1;
  printf("");
  scanf("%d", &A1);
  printf("");
  scanf("%d", &B1);
  // alas
  int alas1 = (B1 * B1 - A1 * A1) / 63;
  printf("Alas = %d cm\n", alas1);
  // Tinggi
  int tinggi1 = A1;
  printf("Tinggi = %d cm\n", tinggi1);
  // keliling
  int keliling1 = A1 + B1 + alas1;
  printf("Keliling = %d cm\n", keliling1);
  // luas
  int luas1 = 0.5 * alas1 * A1;
  printf("Luas = %d^2 cm", luas1);
}