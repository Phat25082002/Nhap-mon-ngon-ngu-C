#include <stdio.h>

int main(){
  int n,m;
  int tong;
    printf ("Nhap n: ");
    scanf ("%d",&n);
    // cong thuc
    while(n>0)  
{  
m=n%10;  
tong=tong+m;
n=n/10; 
}
  printf ("\nTong cac chu so nguyen n la: %d",tong);
  
return 0;
}
