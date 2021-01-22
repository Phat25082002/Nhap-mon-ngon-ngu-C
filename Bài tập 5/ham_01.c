#include<stdio.h>
int sum (int a, int b, int c);
int main(void) {
  int x = 3, y = 8, z = 9;
  printf ("x + y + z = %d",sum(x,y,z));
  return 0;
}
int sum ( int a, int b, int c){
  return a+b+c;
}
