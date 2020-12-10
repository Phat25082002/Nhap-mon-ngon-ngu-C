#include <stdio.h>

int main(void) {
  // khai bao bien a,b;
  int a,b;
  // hien thi ra man hinh a =
  printf (" nhap a = ");
  scanf ("%d", &a);
  // hien thi ra man hinh b =
  printf (" nhap b = ");
  scanf ("%d", &b);
  if (a>b){
    // hien thi ra man hinh a lon hon b
    printf ("a>b", a,b);
    scanf ("%d", &a);
  }else if (a == b) {
    // hien thi ra man hinh a bang b
    printf ("a=b", a,b);
    scanf ("%d", &a);
  }else {
    // hien thi ra man hinh a be hon b
    printf ("a<b", a,b);
    scanf ("%d", &a);
  }
    getchar ();
    return 0;
  }
