#include <stdio.h>
int main()
{
  char nama[99];
  printf("Nama                         : ");
  scanf("%[^\n]", nama);
  getchar();

  char NIM[99];
  printf("NIM                          : ");
  scanf("%[^\n]", NIM);
  getchar();

  char KP[99];
  printf("Kelas Paralel                : ");
  scanf("%[^\n]", KP);
  getchar();

  char tl[99];
  printf("Tempat/Tanggal Lahir         : ");
  scanf("%[^\n]", tl);
  getchar();

  char alamat[99];
  printf("Alamat                       : ");
  scanf("%[^\n]", alamat);
  getchar();

  char hb[99];
  printf("Hobby                        : ");
  scanf("%[^\n]", hb);
  getchar();

  char no[99];
  printf("No. Hp                       : ");
  scanf("%[^\n]", no);
  getchar();
}