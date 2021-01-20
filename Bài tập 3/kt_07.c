#include <stdio.h>

int main() {
  int a, b, c;
  printf("Canh a: ");
  scanf("%d", &a);
  printf("Canh b: ");
  scanf("%d", &b);
  printf("Canh c: ");
  scanf("%d", &c);
    if(a<b+c && b<a+c && c<b+a) {
        printf("\nDay la ba canh cua mot tam giac");
  } else
        printf("\nDay khong phai la ba canh cua mot tam giac");
return 0;
}
