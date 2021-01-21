#include <stdio.h>

int main(void){
  int n; // bao bao bien n
  int a[n]; // khai bao hop n ngan
  printf ("Nhap n:"); // nhap n
  scanf ("%d",&n);
  for (int i=1; i<=n; i++){
    printf ("Phan tu o mang a[%d]:",i); // hien thi ra man hinh cac mang
    scanf ("%d",&a[i]);
  }
  int m; // khai bao bien m
  printf ("Nhap m:"); // nhap m
  scanf ("%d",&m);
  if (n%m){
    printf ("Khong ton tai"); // hien thi thong diep khong ton tai
 } else {
    printf ("Co ton tai"); // hien thi thong diep co ton tai
 }
return 0;
}
