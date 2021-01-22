Cách 1: Có kiểu dữ liệu trả về (int).
  
#include<stdio.h> // khoi khai bao
int sum (int a, int b, int c);
int main(void) { // khoi ham main
  int x = 3, y = 8, z = 9; 
  int sum = x + y + z;
  printf ("Tong la:\n");
  printf ("%d + %d +%d = %d",x,y,z,sum); 
  return 0;
}
int sum ( int a, int b, int c){ // khoi dinh nghia
  int sum = a + b + c;
  return sum;
}
------------------------------------------------------
Cách 2: Không có kiểu dữ liệu trả về (void).

#include<stdio.h> // khoi khai bao
void sum (int a, int b, int c);
int main() { // khoi ham main
  int x = 3, y = 8, z = 9;
  int sum = x + y + z;
  printf ("Tong la:\n");
  printf ("%d + %d + %d = %d",x,y,z,sum);

}
void sum ( int a, int b, int c){ // khoi dinh nghia
}
