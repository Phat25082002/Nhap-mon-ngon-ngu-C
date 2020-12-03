#include <stdio.h>

int main(void) {
  double l;
  printf ("Nhap l = ");
  scanf ("%lf", &l);
  printf ("Met(m)\t Xentimet(cm)\t Milimet(mm)\n");
  printf ("%f \t %.f \t %.f",l,l*100,l*1000);
  return 0;
}
