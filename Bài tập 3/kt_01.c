Cách 1: Không dùng vòng lặp for.
#include <stdio.h>

int main (void){
	// gan cac bien a,b,c
  int a,b,c;
   // In ra man hinh bang cuu chuong
  printf ("Bang Cuu chuong\n");
   // hien thi ra man hinh bang nhan 2
  printf ("Bang nhan 2:");
  a=2; b=1; c=2;
  printf ("\n%d x %d = %d",a,b,c);
  a=2; b=2; c=4;
  printf ("\n%d x %d = %d",a,b,c);
  a=2; b=3; c=6;
  printf ("\n%d x %d = %d",a,b,c);
   // hien thi ra man hinh bang nhan 3
  printf ("\nBang nhan 3:");
  a=3; b=1; c=3;
  printf ("\n%d x %d = %d",a,b,c);
  a=3; b=2; c=6;
  printf ("\n%d x %d = %d",a,b,c);
  a=3; b=3; c=9;
  printf ("\n%d x %d = %d",a,b,c);
   // hien thi ra man hinh bang nhan 4
  printf ("\nBang nhan 4:");
  a=4; b=1; c=4;
  printf ("\n%d x %d = %d",a,b,c);
  a=4; b=2; c=8;
  printf ("\n%d x %d = %d",a,b,c);
  a=4; b=3; c=12;
  printf ("\n%d x %d = %d",a,b,c);
 
  return 0;
}
-----------------
Cách 2:Dùng vòng lặp for.
Bảng 2:
#include <stdio.h>

int main (void){
	int a,b;
	printf ("Bang cuu chuong:");
	for (a=2; a<=2; a++){
		printf ("\nBang nhan %d:",a);
		for (b=1; b<=3; b++){
		printf ("\n%d x %d = %d",a,b,a*b);
        }
    }
return 0;
---------------
Bảng 3,4:
#include <stdio.h>

int main (void){
	int a,b;
	printf ("Bang cuu chuong:");
	for (a=3; a<=4; a++){
		printf ("\nBang nhan %d:",a);
		for (b=1; b<=3; b++){
		printf ("\n%d x %d = %d",a,b,a*b);
        }
    }
return 0;
}
}
