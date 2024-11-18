#include <stdio.h>
int main()
{
  int jumlah_detik, detik, menit, jam, hari;
  printf("");
  scanf("%d", &jumlah_detik);
  hari = jumlah_detik / 86400;
  jumlah_detik -= hari * 86400;
  jam = jumlah_detik / 3600;
  menit = (jumlah_detik % 3600) / 60;
  detik = jumlah_detik % 60;
  if (jumlah_detik < 0)
  {
    printf("Error");
  }
  else if (jumlah_detik == 0)
  {
    printf("00:00:00");
  }
  else if (hari == 0)
  {
    printf("%02d:%02d:%02d", jam, menit, detik);
  }
  else
  {
    printf("%d hari %02d:%02d:%02d", hari, jam, menit, detik);
  }
}