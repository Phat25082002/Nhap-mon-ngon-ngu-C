#include <stdio.h>

int main(void) {
  // khai bao bien donggia, soluong, thanhtien
  int dongia, soluong, thanhtien;
  // hien thi ra man hinh dongia =
  printf (" dongia = ");
  scanf ("%d", &dongia);
  // hien thi ra man hinh so luong =
  printf (" soluong = ");
  scanf ("%d" ,&soluong);
  thanhtien = dongia * soluong;
  // soluong >= 5 thi don gia se giam 50%
  if (soluong >=5 & dongia >=5){
  // hien thi ra so tien can phai thanh toan khi soluong >=5
  printf ("so tien can phai thanh toan la %d", thanhtien*50/100);
  } else {
  // hien ra so tien can phai thanh toan khi don soluong <5
  printf (" so tien can phai thanh toan la %d", thanhtien);}
  return 0;
  getchar ();
}
