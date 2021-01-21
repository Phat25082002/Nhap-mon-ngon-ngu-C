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
  for (int j=0; j <m; j++){
  printf ("So phan tu co gia tri %d:%d\n",m,m+1);
  printf ("Chi so cac phan tu tren la: %d %d",j,m);
  if (n % m){
    printf ("Khong ton tai");
    scanf ("%d",&n);
 } else {
   printf ("\n");
    printf ("Co ton tai");
     scanf ("%d",&n);
 }
 }
return 0;
}
