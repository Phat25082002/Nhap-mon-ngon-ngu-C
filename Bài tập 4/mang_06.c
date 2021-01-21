#include <stdio.h>

int main(void){
  int n; // khai bao bien n
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
  for (int j=0; j <m; j++){
  printf ("So phan tu co gia tri %d: %d\n",m,n-m); // hien thi ra man hinh so cac pt
  printf ("Chi so cac phan tu tren la: %d %d",j,m); // hien thi ra man hinh chi so cac pt
  if (n % m){
    printf ("\n");
    printf ("Khong ton tai"); // hien thi thong diep khong ton tai
    scanf ("%d",&n);
 } else {
   printf ("\n");
    printf ("Co ton tai "); // hien thi thong diep co ton tai
    scanf ("%d",&n);
 }
 }
return 0;
}
