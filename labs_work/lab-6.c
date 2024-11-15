/*
object :
To understand function programming, its types and function-call
*/

// Write a program to add, subtract, multiply and divide two integers using user defined type function with return type.

// #include <stdio.h>

// // Function to add two integers
// int add(int a, int b) {
//     return a + b;
// }

// // Function to subtract two integers
// int subtract(int a, int b) {
//     return a - b;
// }

// // Function to multiply two integers
// int multiply(int a, int b) {
//     return a * b;
// }

// // Function to divide two integers (checks for division by zero)
// float divide(int a, int b) {
//     if (b != 0) {
//         return (float)a / b;
//     } else {
//         printf("Error: Division by zero is not allowed.\n");
//         return 0;
//     }
// }

// int main() {
//     int num1, num2;
//     printf("Enter two integers: ");
//     scanf("%d %d", &num1, &num2);

//     // Perform and display each operation
//     printf("Addition: %d\n", add(num1, num2));
//     printf("Subtraction: %d\n", subtract(num1, num2));
//     printf("Multiplication: %d\n", multiply(num1, num2));
//     if (num2 != 0) {
//         printf("Division: %.2f\n", divide(num1, num2));
//     } else {
//         printf("Cannot perform division by zero.\n");
//     }
// } 


// Write a program to calculate sum of first 50 natural numbers using recursive function.

// #include <stdio.h>

// // Function to calculate sum using recursion
// int sum(int n) {
//     if (n == 1) {
//         return 1;  // Base case
//     } else {
//         return n + sum(n - 1);  // Recursive case
//     }
// }

// int main() {
//     int result;

//     // Calculate sum of first 50 natural numbers
//     result = sum(50);

//     // Display the result
//     printf("The sum of the first 50 natural numbers is: %d\n", result);

//     return 0;
// }


// // Define a function named fact() to calculate factorial of a number n and then write a program that uses this function fact() to calculate combination and permutation.


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

// // Write a recursive function to generate Fibonacci series.
// #include <stdio.h>

// // Recursive function to return the Fibonacci number at position n
// int fibonacci(int n) {
//     if (n == 0) return 0;         // Base case 1
//     if (n == 1) return 1;         // Base case 2
//     return fibonacci(n - 1) + fibonacci(n - 2);  // Recursive call
// }

// int main() {
//     int n, i;

//     // Input the number of terms
//     printf("Enter the number of terms in the Fibonacci series: ");
//     scanf("%d", &n);

//     // Print Fibonacci series
//     printf("Fibonacci Series: ");
//     for (i = 0; i < n; i++) {
//         printf("%d ", fibonacci(i));
//     }
//     printf("\n");

//     return 0;
// }


// Write a program that illustrates use of local, global and static variables.

// #include <stdio.h>

// int global_var = 10; 

// void function() {
//     static int static_var = 0;  
//     int local_var = 5;          

//     printf("Local variable: %d, Static variable: %d, Global variable: %d\n", local_var, static_var, global_var);
//     static_var++;  
// }

// int main() {
//     for (int i = 0; i < 3; i++) {
//         function();
//     }

//     return 0;
// }


// Write a C program to calculate sum of the natural number up to N number using recursive function.

// #include <stdio.h>

// int sum_of_natural_numbers(int n) {
//     if (n == 0) {
//         return 0;
//     }
//     return n + sum_of_natural_numbers(n - 1);
// }

// int main() {
//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);
    
//     printf("Sum of natural numbers up to %d: %d\n", n, sum_of_natural_numbers(n));
//     return 0;
// }


// Write a C program to calculate following expression: 5x √(y^2 +5)

// #include <stdio.h>
// #include <math.h>

// int main() {
//     float x, y, result;
    
//     printf("Enter values of x and y: ");
//     scanf("%f %f", &x, &y);

//     result = 5 * x * sqrt(pow(y, 2) + 5);
    
//     printf("Result of expression: %.2f\n", result);
//     return 0;
// }

// Write a program to find smallest number from the array using function.


#include <stdio.h>

int find_smallest(int arr[], int n) {
    int smallest = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }
    return smallest;
}

int main() {
    int arr[5], smallest;

    printf("Enter 5 numbers: ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    smallest = find_smallest(arr, 5);
    printf("Smallest number is: %d\n", smallest);
    return 0;
}
