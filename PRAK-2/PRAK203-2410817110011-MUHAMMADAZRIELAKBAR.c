#include <stdio.h>
int main()
{
  float a, b, i, j, x, y;
  scanf("%f", &a);
  scanf("%f", &b);
  scanf("%f", &i);
  scanf("%f", &j);
  scanf("%f", &x);
  scanf("%f", &y);
  printf("%.3f", (a - b) * (i / j) - (x + y));

  float a1, b1, i1, j1, x1, y1;
  scanf("%f %f", &a1, &b1);
  scanf("%f %f", &i1, &j1);
  scanf("%f %f", &x1, &y1);
  printf("%.3f", (a1 - b1) * (i1 / j1) - (x1 + y1));
}