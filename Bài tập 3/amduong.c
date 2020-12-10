#include <stdio.h>

int main(void) {
  // khai bao bien a
  int a = -1;
  if (a > 0){
    // hien thi bien a la so duong
    printf ("%d duong", a);
    scanf ("%d", &a);
  }else if (a == 0) {
    // hien thi bien a bang 0
    printf ("%d", a);
    scanf ("%d", &a);
  }else {
    // hien thi bien a la so am
    printf ("%d am", a);
    scanf ("%d", &a);
  }
    getchar ();
    return 0;
  }
