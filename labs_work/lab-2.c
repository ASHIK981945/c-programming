// To be familiar with different data types, Operators and Expressions in C


// WAP to declare two integer and one float variables then initialize them to 10, 15, and 12.6. Also print the variable values in the screen

// #include <stdio.h>

// int main() {
//     int a = 10;
//     int b = 15;
//     float c = 12.6;

//     printf(" Integer Value of a is: %d\n", a);//output:10
//     printf(" Integer Value of b is: %d\n", b);//output:15
//     printf(" Float Value of c is: %f\n", c);//output:12.5
//     return 0;
//     }

// Write a C program to prompt the user to input 3 integer values and print these values in forward and reversed order  

// #include <stdio.h>

// int main() {
    // int num1, num2, num3;
    // printf("Enter three integers:\n");
    // printf("First integer: "); // input:4
    // scanf("%d", &num1);
    // printf("Second integer: ");// input:10
    // scanf("%d", &num2);
    // printf("Third integer: ");// input:24
    // scanf("%d", &num3);

//     printf("\nValues in forward order: %d, %d, %d\n", num1, num2, num3);// output:4,10,24
//     printf("Values in reverse order: %d, %d, %d\n", num3, num2, num1);// output:24,10,4

//     return 0;
// }


// Write a program to calculate simple and compound interest


// #include <stdio.h>
// #include <math.h>

// int main(){
    // float principal, rate, time, simple_interest, compound_interest;

    // printf("Enter the principal amount: ");
    // scanf("%f", &principal);
    
    // printf("Enter the rate of interest:");
    // scanf("%f",&rate);

    // printf("Enter the time period:");
    // scanf("%f",&time);

    // simple_interest=(principal*rate*time)/100;

    // compound_interest=principal*pow((1+rate/100), time)- principal;

    // printf("\n Simple Interest: %.2f\n",simple_interest);
    // printf("Compound Interest: %.2f\n", compound_interest);
    // return 0;
// }

// Write a program to swap two variables values with and without using third variables

#include<stdio.h>
int main() {
  float first, second, temp;

  printf("Enter first number: ");
  scanf("%f", &first);
  printf("Enter second number: ");
  scanf("%f", &second);

  temp = first;
  first = second
  second = temp;

  printf("\nAfter swapping, first number = %.2f\n", first);
  printf("After swapping, second number = %.2f", second);
  return 0;
}


// Write a program to check odd oreven number 
// (a) using modulus operator 

// #include <stdio.h>

// int main() {
    // int num;

    // printf("Enter an integer: ");
    // scanf("%d", &num);
    // if (num % 2 == 0)
        // printf("%d is even.\n", num);
    // else
        // printf("%d is odd.\n", num);

    // return 0;
// }

// (b) using bitwise operator 

// #include <stdio.h>

// int main() {
    // int num;

    // printf("Enter an integer: ");
    // scanf("%d", &num);

    // if (num & 1)
        // printf("%d is odd.\n", num);
    // else
        // printf("%d is even.\n", num);

    // return 0;
// }


// (c) without using bitwise and modulus operator

// #include <stdio.h>

// int main() {
    // int num, h;

    // printf("Enter an integer: ");
    // scanf("%d", &num);

    // h = num / 2;  
    // if (h * 2 == num)
        // printf("%d is even.\n", num);
    // else
        // printf("%d is odd.\n", num);

    // return 0;
// }

// (d) using conditional operator.


// #include <stdio.h>

// int main() {
    // int num;

    // printf("Enter an integer: ");
    // scanf("%d", &num);

    // (num % 2 == 0) ? printf("%d is even.\n", num) : printf("%d is odd.\n", num);

    // return 0;
// }

// Print the value of y for given x=2 & z=4 and analyze the output.
// y = x++ + ++x;
// y= ++x + ++x;
// y= ++x + ++x + ++x;
// y = x>z;
// y= x>z? x:z;
// y = x&z;
// y= x>>2 + z<<1;



// #include <stdio.h>

// int main() {
    // int x = 2, z = 4;
    // int y;

    // Expression 1: y = x++ + ++x;
    // x = 2;  // Reset x to 2
    // y = x++ + ++x;
    // printf("y = x++ + ++x; => y = %d, x = %d\n", y, x);

    // Expression 2: y = ++x + ++x;
    // x = 2;  // Reset x to 2
    // y = ++x + ++x;
    // printf("y = ++x + ++x; => y = %d, x = %d\n", y, x);

    // Expression 3: y = ++x + ++x + ++x;
    // x = 2;  // Reset x to 2
    // y = ++x + ++x + ++x;
    // printf("y = ++x + ++x + ++x; => y = %d, x = %d\n", y, x);

    // Expression 4: y = x > z;
    // x = 2;  // Reset x to 2
    // y = x > z;
    // printf("y = x > z; => y = %d\n", y);

    // Expression 5: y = x > z ? x : z;
    // x = 2;  // Reset x to 2
    // y = x > z ? x : z;
    // printf("y = x > z ? x : z; => y = %d\n", y);

    // Expression 6: y = x & z;
    // x = 2;  // Reset x to 2
    // y = x & z;
    // printf("y = x & z; => y = %d\n", y);

    // Expression 7: y = x >> 2 + z << 1;
    // x = 2;  // Reset x to 2
    // y = (x >> 2) + (z << 1);
    // printf("y = x >> 2 + z << 1; => y = %d\n", y);

    // return 0;
// }


// Write a program to print the size of char, float, double and long double data types in C.

// #include <stdio.h>
// 
// int main() {
    // printf("Size of char: %lu byte\n", sizeof(char));
    // printf("Size of float: %lu bytes\n", sizeof(float));
    // printf("Size of double: %lu bytes\n", sizeof(double));
    // printf("Size of long double: %lu bytes\n", sizeof(long double));

    // return 0;
// }
/*Write a C program to convert a given temperature from Celsius to Fahrenheit and Kelvin. The program should:
Define symbolic constants for the conversion factors.
Declare and initialize a variable for the temperature in Celsius.
Calculate and print the temperature in Fahrenheit and Kelvin using macros (preprocessor directives)
#define CELSIUS_TO_FAHRENHEIT(c) ((c) * 9.0 / 5.0 + 32)  // Conversion macro
#define CELSIUS_TO_KELVIN(c) ((c) + 273.15)  // Conversion macro  
*/

#include <stdio.h>

#define CELSIUS_TO_FAHRENHEIT(c) ((c) * 9.0 / 5.0 + 32)  
#define CELSIUS_TO_KELVIN(c) ((c) + 273.15)  

int main() {
    
    float celsius;

    
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);


    float fahrenheit = CELSIUS_TO_FAHRENHEIT(celsius);
    float kelvin = CELSIUS_TO_KELVIN(celsius);

    
    printf("Temperature in Fahrenheit: %.2f\n", fahrenheit);
    printf("Temperature in Kelvin: %.2f\n", kelvin);

    return 0;
}
