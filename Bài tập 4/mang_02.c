#include <stdio.h>

int main(void) {
  int n,i; // khai bao 
  int a[n]; // khai bao hop n ngan
  printf ("Nhap n:"); // nhap n
  scanf ("%d",&n);
  for ( i=0; i<=n; i++){
    printf ("a[%d]: %d\n",i,i*2); // hien thi ra man hinh cac so chan cua cac mang
  }
  return 0;
}
