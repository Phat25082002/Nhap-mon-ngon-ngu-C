//Khoi khai bao
#include<stdio.h>
int kiem_tra_am_duong();
//khoi ham main
int main(){
int n;
int kiem_tra_am_duong;
printf("Nhap n = "); // nhap n
scanf("%d", &n);
if((n) > 0)
printf("n la so nguyen duong "); // hien thi ra man hinh n la so duong
else if ((n) < 0)
printf("n la so nguyen am "); // hien thi ra man hinh n la so am
else
printf("n = 0"); // hien thi ra man hinh n = 0
return 0;
}
int kiem_tra_am_duong (){
  int kiem_tra_am_duong;
  return kiem_tra_am_duong;
}
