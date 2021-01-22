//Khoi khai bao
#include<stdio.h>
int kiem_tra_am_duong(int a);
//khoi ham main
int main(){
int n;
  printf("Nhap n = "); // nhap n
  scanf("%d", &n);
if(kiem_tra_am_duong(n) > 0)
  printf("n la so nguyen duong "); // hien thi ra man hinh n la so duong
else if (kiem_tra_am_duong(n) < 0)
  printf("n la so nguyen âm "); // hien thi ra man hinh n la so am
else
  printf("n = 0"); // hien thi ra man hinh n = 0
return 0;
}
int kiem_tra_am_duong (int a){ // khoi dinh nghia ham
int kiem_tra_am_duong;
  return a;
}
