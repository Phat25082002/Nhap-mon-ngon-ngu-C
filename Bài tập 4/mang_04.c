#include <stdio.h>

int main(void) {
  int n,i; // khai bao 
  int a[n]; // khai bao hop n ngan
  int Tong = 0; // khai bao bien tong
  printf ("Nhap n:"); // nhap n
  scanf ("%d",&n);
  for ( i=1; i<=n; i++){
    printf ("Phan tu o mang a[%d]:",i); // hien thi ra man hinh cac mang
    scanf ("%d",&a[i]);
}
for (i=1; i<=n; i++){
    Tong = Tong + a[i]; // cong thuc
}
  // xuat ra man hinh tinh tong
    printf ("Tong = %d",Tong);
return 0;
}
