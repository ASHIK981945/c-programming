/*
object :
To understand function programming, its types and function-call
*/

// Write a program to add, subtract, multiply and divide two integers using user defined type function with return type.

// #include <stdio.h>

// int add(int a, int b) {
//     return a + b;
// }
// int subtract(int a, int b) {
//     return a - b;
// }

// int multiply(int a, int b) {
//     return a * b;
// }

// float divide(int a, int b) {
//     if (b != 0) {
//         return (float)a / b;
//     } else {
//         printf("Division by zero error!\n");
//         return 0;
//     }
// }

// int main() {
//     int num1, num2;

//     printf("Enter two integers: ");
//     scanf("%d %d", &num1, &num2);

//     printf("Addition: %d\n", add(num1, num2));
//     printf("Subtraction: %d\n", subtract(num1, num2));
//     printf("Multiplication: %d\n", multiply(num1, num2));
//     printf("Division: %.2f\n", divide(num1, num2));

//     return 0;
// }

// Write a program to calculate sum of first 50 natural numbers using recursive function.


// #include <stdio.h>

// int sum_of_natural_numbers(int n) {
//     if (n == 0) {
//         return 0;
//     }
//     return n + sum_of_natural_numbers(n - 1);
// }

// int main() {
//     int sum = sum_of_natural_numbers(50);
//     printf("Sum of first 50 natural numbers: %d\n", sum);
//     return 0;
// }


// Define a function named fact() to calculate factorial of a number n and then write a program that uses this function fact() to calculate combination and permutation.


// #include <stdio.h>

// int fact(int n) {
//     if (n == 0) {
//         return 1;
//     }
//     return n * fact(n - 1);
// }

// int combination(int n, int r) {
//     return fact(n) / (fact(r) * fact(n - r));
// }

// int permutation(int n, int r) {
//     return fact(n) / fact(n - r);
// }

// int main() {
//     int n, r;
//     printf("Enter n and r values: ");
//     scanf("%d %d", &n, &r);

//     printf("Combination C(%d, %d): %d\n", n, r, combination(n, r));
//     printf("Permutation P(%d, %d): %d\n", n, r, permutation(n, r));

//     return 0;
// }

// Write a recursive function to generate Fibonacci series.

#include <stdio.h>

void fibonacci(int n, int a, int b) {
    if (n > 0) {
        printf("%d ", a);
        fibonacci(n - 1, b, a + b);
    }
}

int main() {
    int n;
    printf("Enter number of terms: ");
    scanf("%d", &n);
    
    printf("Fibonacci series: ");
    fibonacci(n, 0, 1);
    printf("\n");
    return 0;
}
