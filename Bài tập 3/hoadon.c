#include <stdio.h>

int main(void) {
  // khai bao bien dongia, soluong, thanhtien
  int DG, SL, TT;
  // hien thi ra man hinh dongia =
  printf (" DG = ");
  scanf ("%d", &DG);
  // hien thi ra man hinh so luong =
  printf (" SL = ");
  scanf ("%d" ,&SL);
  TT = DG * SL;
  // soluong >= 5 va dongia >=500 thi thanhtien se giam 50%
  if (SL >=5 & DG >=500){
  // hien thi ra so tien can phai thanh toan khi soluong >=5
  printf ("so tien can phai thanh toan la %d", TT*50/100);
  } else {
  // hien ra so tien can phai thanh toan khi don soluong <5
  printf (" so tien can phai thanh toan la %d", TT);}
  return 0;
  getchar ();
}
