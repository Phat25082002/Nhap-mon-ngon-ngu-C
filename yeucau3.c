#include <stdio.h>

int main (){
  int a,b;
  int BCNN (int a, int b);
  printf ("Nhap so nguyen duong a: ");
  scanf ("%d",&a);
  printf ("Nhap so nguyen duong b: ");
  scanf ("%d",&b);
  if ( b== 0 ) return a;
  printf ("BSCNN cua %d va %d la: %d",a,b,(BCNN (a,b)));
  return 0;
}
