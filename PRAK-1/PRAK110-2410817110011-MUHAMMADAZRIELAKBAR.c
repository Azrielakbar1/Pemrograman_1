#include <stdio.h>
int main()
{
  printf("Diketahui :\n");
  int A = 5;
  int B = 12;
  int Keliling = 30;
  int Luas = 30;
  printf("Alas = %d cm\n", A);
  printf("Tinggi = %d cm\n\n", B);
  printf("Jawab :\n");
  printf("Sisi A = %d cm\n", A);
  printf("Sisi B = %d cm\n", B);

  int C = Keliling - (A + B);
  printf("Sisi C = %d cm\n", C);
  printf("Keliling = %d cm\n", Keliling);
  printf("Luas = %d cm\n", Luas);
}