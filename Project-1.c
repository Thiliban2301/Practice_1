/*
Area of rectangle = lxb
Perimeter of Rectangle = 2(l+b)

Area of Circle = pi r2
Circumference of circle = 2 pi r
*/

#include<stdio.h>
int main()
{
    float l,b,r_area,r_peri,r,c_area,cir;
printf("\nEnter Length & Breadth of Rectangle : ");
scanf("%f%f",&l,&b);
printf("\nEnter Radius of Circle :");
scanf("%f",&r);
r_area= l*b;
r_peri=(2*(l+b));
c_area = 3.14*r*r;
cir=2*3.14*r;
printf("\nArea of Rectangle =%0.2f",r_area);
printf("\nPerimeter of Rectangle =%0.2f",r_peri);
printf("\nArea of Circle =%0.2f",c_area);
printf("\nCircumference of Circle  =%0.2f",cir);

                return 0;

}

