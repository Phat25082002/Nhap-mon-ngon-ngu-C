#include <stdio.h>

int main(){
 // khai bao bien don gia,so luong,thanh tien
	int dongia,soluong,thanhtien;
 // hien thi ra man hinh dongia
	printf ("dongia =");
	scanf("%d",& dongia) ;
 // hien thi ra man hinh soluong
	printf ("soluong =");
	scanf("%d",& soluong);
 // cong thuc
	thanhtien = soluong*dongia;
 // dieu kien so luong >=5 va dongia >=500
if (soluong >= 5 & dongia >=500 ){
    thanhtien= (soluong*dongia)*0.5;
 // hien thi ra man hinh thanhtien
	printf ("%d",thanhtien );
}else {
	printf (" %d",thanhtien);
	}
  getchar();
  return 0;
}
