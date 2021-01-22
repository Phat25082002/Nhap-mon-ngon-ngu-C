#include <stdio.h>

int main(void) {
  int n,i; // khai bao 
  int a[n]; // khai bao hop n ngan
  printf ("Nhap n:"); // nhap n
  scanf ("%d",&n);
  for ( i=0; i<=n; i++){
    printf ("a[%d]: %d\n",i,i+1); // hien thi ra man hinh so mang
  }
  printf ("Mang a: ");
  scanf ("%d",&n);
  return 0;
}
