#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
double x0,y0,x1,y1,h,k,k1,k2,k3,k4,xn;
double f(double,double);
clrscr();
printf("enter the value of x0,y0,xn & h: ");
scanf("%lf%lf%lf%lf",&x0,&y0,&xn,&h);
do
{
k1=h*f(x0,y0);
k2=h*f(x0+(h/2.0),y0+(k1/2.0));
k3=h*f(x0+(h/2.0),y0+(k2/2.0));
k4=h*f(x0+h,y0+k3);
k=(k1+2*k2+2*k3+k4)/6.0;
y1=y0+k;
x1=x0+h;
y0=y1;
x0=x1;
}while(x0<xn);
printf("the required result is %16.5lf",y1);
getch();
}
double f(double x,double y)
{
double g;
g=x-y;
return(g);
}