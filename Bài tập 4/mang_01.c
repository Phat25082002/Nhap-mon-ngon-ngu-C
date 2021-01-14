#include <stdio.h>

int main() {
  int a[4] = {3, 5, 7, 2};
  printf ("%s%7s\n","Element","Value");
  for (int i=0; i<4; ++i){
    printf ("%7u%7d\n",i, a[i]);
  }
  return 0;
}
