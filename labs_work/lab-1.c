
// To be familiar with syntax and structure of C-programming.
// To learn problem solving techniques using C

// Write a program to display “hello world” in C.

// #include <stdio.h>
// int main(){
//     printf("hello world \n");
//     return 0;
// }


// Write a program to add two numbers (5&7) and display its sum


// #include<stdio.h>

// int main(){
//     int a,b,c;
//     printf("Enter two whole numbers:\n"); // input =5,7
//     scanf("%d%d",&a,&b ); 
//     c = a+b;
//     printf("\nsum = %d",c);//output =12
//     return 0;
// }


// Write a program to multiply two numbers (10&8) and display its product

// #include<stdio.h>

// int main(){
//     int a,b,c;
//     printf("Enter two whole numbers:\n");// input =10,8
//     scanf("%d%d",&a,&b );
//     c= a*b;
//     printf("\nProduct = %d",c);//output=80

//     return 0;
// }


// Write a program to calculate area of a circle having its radius (r=5).

// #include <stdio.h>
// # define pi 3.1416

// int main (){
//     float r, area; // input=5
//     printf("\n enter the radius of circle:");
//     scanf("%f",&r);
//     area = pi * r * r ;
//     printf("\n the area of the circle with radius %f \t is : %f",r,area);
//  // output=78.540001
//     return 0;
// }


// Write a program to calculate simple interest for a given P=4000, T=2, R=5.5. (I =PTR/100)

// #include <stdio.h>

// int main()
// {
    // float p,t,r,i;
    // printf("enter principal,time and rate :\n");// input= P=4000, T=2, R=5.5.
    // scanf("%f%f%f",&p,&t,&r);
//     i=(p*t*r)/100;
//     printf("Interest=%f",i);// output=440.000000
//     return 0;
// }


// Write a program to calculate area of an ellipse having its axes (minor=4cm, major=6cm).

#include<stdio.h>
# define pi 3.1416

int main(){
    float major,minor,area;
    printf("Enter the minor and major axis of ellipse:\n");// input=(minor=4cm, major=6cm). 
    scanf("%f%f",&major,&minor);
    area = pi * minor * major ;
    printf("Area of ellipse = %f",area);// output=75.398399
    return 0; 
}