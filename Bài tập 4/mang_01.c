#include <stdio.h>

int main() {
  int Tong =0;
  int a[4]; // khai bao hop 4 ngan
  a[0] = 3; // ngan thu 1
  a[1] = 5; // ngan thu 2
  a[2] = 7; // ngan thu 3
  a[3] = 2; // ngan thu 4
  for (int i=0; i<4; i++){
  printf ("%d\n",a[i]);
  }
  for (int i=0; i<4; i++){
  // cong thuc 
    Tong = Tong + a[i];
  }
  // xuat ra man hinh tong
    printf ("Tong = %d",Tong);
    return 0;
  }
