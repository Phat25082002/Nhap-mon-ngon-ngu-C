#include<stdio.h>
#include<math.h>

int main(){

float a,b,c,d;

printf("Nhap he so a: ");
scanf("%f",&a);
printf ("Nhap he so b: ");
scanf("%f",&b);
printf ("Nhap he so c: ");
scanf("%f",&c);

if (a)

{d=b*b-4*a*c;

if (d<0) printf("Phuong trinh vo nghiem");

if (d==0) printf("Phuong trinh co nghiem kep la x=%4.2f",-0.5*b/a);

if (d>0){
printf("Phuong trinh co hai nghiem phan biet :\n");

printf("x1=%4.2f",0.5*(-b-sqrt(d))/a);

printf(" x2=%4.2f",0.5*(-b+sqrt(d))/a);

}

}else if (b) printf("Phuong trinh co mot nghiem la x=%4.2f",-c/b);

else if (c) printf("Phuong trinh vo nghiem ");
else printf("Phuong trinh co vo so nghiem ");
return 0; 
}
