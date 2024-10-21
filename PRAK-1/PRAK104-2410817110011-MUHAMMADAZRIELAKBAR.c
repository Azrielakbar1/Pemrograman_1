#include <stdio.h>
int main()
{
  int A = 400000;
  printf("Harga sepatu A adalah %d\n", A);
  int B = 350000;
  printf("Harga sepatu B adalah %d\n", B);

  int x1 = A * 13 / 100;
  int x2 = A - x1;
  printf("Sepatu A mendapatkan diskon 13%% sehingga harganya %d\n", x2);
  int y1 = B * 21 / 100;
  int y2 = B - y1;
  printf("Sepatu B mendapatkan diskon 21%% sehingga harganya %d\n", y2);
}