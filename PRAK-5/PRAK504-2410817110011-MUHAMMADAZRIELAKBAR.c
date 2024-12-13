#include <stdio.h>

int reverse(int i)
{
  int reversed = 0;
  while (i > 0)
  {
    int digit = i % 10;
    reversed = reversed * 10 + digit;
    i /= 10;
  }
  return reversed;
}

int main()
{
  int A, B;
  scanf("%d %d", &A, &B);
  A = reverse(A);
  B = reverse(B);
  int C = A + B;
  printf("%d", reverse(C));
}
