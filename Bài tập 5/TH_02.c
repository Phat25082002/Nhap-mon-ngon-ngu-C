#include<stdio.h>

int main(){
	int n;
	int S;
	S = 0;
	printf ("Nhap n: ");
	scanf ("%d",&n);
	for (int i =1; i <=n; i++){
		S = S + i;
	}
	printf ("Tong 1 + 2 + ... + %d la %d",n,S);
	return 0;
}
