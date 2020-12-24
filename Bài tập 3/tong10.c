Cách 1:
#include <stdio.h>

int main() {
  // khai bao bien i, Tong
  int i,Tong; 
  {
    printf ("%.d ",i);
    // cong thuc tinh Tong
    Tong = 1+2+3+4+5+6+7+8+9+10;
    // hien thi ra man hinh Tong
    printf ("Tong la %.d",Tong);
  }
  return 0;
}

Cách 2:
#include <stdio.h>

int main() {
  // khai bao bien i, Tong
  int tong= 0;
  for (int dem = 1; dem <= 10; dem++){
    tong = tong + dem;
  }
  printf ("Tong la %d", tong);
  return 0;
}
