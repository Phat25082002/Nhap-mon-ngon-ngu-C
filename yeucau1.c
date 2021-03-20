#include <stdio.h>

int main(void) {
  int n,S; // khai bao 2 bien n va S
  S = 0;
  printf ("Nhap n: "); // nhap n
  scanf ("%d",&n);
  for (int i = 1; i<=n; i++){
    S = (n*(n+1)*(2*n+1))/6; // cong thuc
  }
  printf ("S = 1^2 + 2^2+...+ %d^2 = %d",n,S); // hien thi ra man hinh tong S
  return 0;
}
