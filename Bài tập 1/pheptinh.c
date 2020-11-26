#include <stdio.h>
int main(void)
{
  // khai bao gia tri bien a
	int a = 3;
  // khai bao gia tri bien b
	int b = 5;
	int tong, hieu, tich ;
	double thuong ;
	tong = a + b;
	hieu = a - b;
	tich = a * b;
	thuong = (double)a / b;
	printf("a + b = %d, a - b = %d, a * b = %d, a / b = %0.1f", tong, hieu, tich, thuong);
	getchar();
	return 0;
}
