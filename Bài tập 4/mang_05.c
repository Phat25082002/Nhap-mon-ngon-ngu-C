#include <stdio.h>

int main(void){
  int n;
  int a[n];
  printf ("Nhap n:");
  scanf ("%d",&n);
  for (int i=1; i<=n; i++){
    printf ("Phan tu o mang a[%d]:",i); // hien thi ra man hinh cac mang
    scanf ("%d",&a[i]);
  }
  int m;
  printf ("Nhap m:");
  scanf ("%d",&m);
  if (n%m){
    printf ("Khong ton tai");
 } else {
    printf ("Co ton tai");
 }
return 0;
}
