//  a program to computer the area of a circle using symbolic constant

// #include <stdio.h>
// # define pi 3.1416
// int main (){
//     float r, area;
//     printf("\n enter the radius of circle:");
//     scanf("%f",&r);
//     area = pi * r * r ;
//     printf("\n the area of the circle with radius %f \t is : %f",r,area);
//     return 0;
// }

// program to  computer an area and circumference of a circle

#include <stdio.h>
int main(){
    float r, area, circumference;
    const float pi=3.1416;
    printf("\n Enter the radius of a circle:");
    scanf("%f",&r);
    area=pi *r*r;
    circumference=2*pi*r;
    printf("\n The area  and circumference of the circle with radius %f  \t is : %f",r,area,circumference);
    return 0;
}