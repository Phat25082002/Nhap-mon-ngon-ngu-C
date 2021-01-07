#include <stdio.h>

int main(void) {
  // khai bao bien V va T;
  int V, T;
  // hien thi nhap V =
  printf (" nhap Van = ");
  scanf ("%d", &V);
  // hien thi nhap T =
  printf (" nhap Toan = ");
  scanf ("%d", &T);
  double DTB;
  DTB = (V + T)/2;
  // Tinh diem trung binh Van, Toan va hien ra man hinh V + T/2 = DTB
  printf ("(%d + %d)/2 =%.f",V,T,DTB);
  printf ("\n");
  printf ("Van:%d \t Toan:%d \t DTB:%.f",V,T,DTB);
  return 0;
}
