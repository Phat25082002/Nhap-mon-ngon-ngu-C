#include <stdio.h>

int main(void) {
  // gan gia tri a
  int a;
  // hien thi ra man hinh
  printf ("Cac so le tu 1 den 20 tru 5, 11, 15 la:");
  for ( a=1; a<= 20; a++){
    if (a%2){
      switch (a){
        case 5:
        case 11:
        case 15:
          break;
        default:
          printf ("\n%d",a);
        }
      }
    }
  return 0;
}
