#include <stdio.h>

int main(){
 int a = 5, b = 2;
 char pt;
 printf ("vui long nhap phep tinh: ");
 scanf ("%c", &pt);
 switch (pt)
 {
   case '+':
   // hien thi ra man hinh phep tinh +
   printf ("a + b = %d ",a+b);
   break;
   case '-':
   // hien thi ra man hinh phep tinh -
   printf ("a - b = %d",a-b);
   break;
   // vui long nhap ki tu toan tu
   default:
   printf ("loi toan tu khong dung");
 }
 return 0;
 }
