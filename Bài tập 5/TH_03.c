#include <stdio.h>
 
int main(){
    int a, b, c; // khai bao 3 bien a, b, c
    printf("Nhap so a: "); // nhap a
    scanf("%d", &a);
    printf ("Nhap so b: "); // nhap b
    scanf ("%d",&b);
    printf ("Nhap so C: "); // nhap c
    scanf ("%d",&c);
    if (a >= b && a >= c){
         printf("So lon nhat trong 3 so la:\na = %d", a); // hien thi ra man hinh a la so lon nhat
} else if (b >= a && b >= c){
         printf("So lon nhat trong 3 so la:\nb = %d", b); // hien thi ra man hinh b la so lon nhat
}else{
         printf("So lon nhat trong 3 so la:\nc = %d", c); // hien thi ra man hinh c la so lon nhat
     }
    return 0;
}
