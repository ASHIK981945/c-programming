/*
To understand the programming knowledge using Decision Statements (if, if-else, if- else if ladder, switch and GOTO)
*/

/*
Write a program to find the largest and smallest among three entered numbers and also display whether the identified largest/smallest number is even or odd.
*/

// #include <stdio.h>

// int main() {
    // int num1, num2, num3;
    // int largest, smallest;


    // printf("Enter three numbers: ");
    // scanf("%d %d %d", &num1, &num2, &num3);

    
    // largest = (num1 > num2) ? (num1 > num3 ? num1 : num3) : (num2 > num3 ? num2 : num3);

    // smallest = (num1 < num2) ? (num1 < num3 ? num1 : num3) : (num2 < num3 ? num2 : num3);

    // printf("Largest number: %d (%s)\n", largest, (largest % 2 == 0) ? "Even" : "Odd");
    // printf("Smallest number: %d (%s)\n", smallest, (smallest % 2 == 0) ? "Even" : "Odd");

    // return 0;
// }


//  Check whether the input alphabet is a vowel using if-else and switch statement:

// #include <stdio.h>

// int main() {
    // char ch;

    
    // printf("Enter an alphabet: ");
    // scanf(" %c", &ch);

    
    // if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        // ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        // printf("%c is a vowel (if-else).\n", ch);
    // } else {
        // printf("%c is not a vowel (if-else).\n", ch);
    // }

    
    // switch (ch) {
        // case 'a': case 'e': case 'i': case 'o': case 'u':
        // case 'A': case 'E': case 'I': case 'O': case 'U':
            // printf("%c is a vowel (switch).\n", ch);
            // break;
        // default:
            // printf("%c is not a vowel (switch).\n", ch);
    // }

    // return 0;
// }


// Display a two or higher digit integer in reverse order:

// #include <stdio.h>

// int main() {
    // int num;

    
    // printf("Enter a two or higher digit integer: ");
    // scanf("%d", &num);

    
    // printf("Reversed number: ");
    // while (num != 0) {
        // printf("%d", num % 10);
        // num /= 10;
    // }
    // printf("\n");

    // return 0;
// }


//  Test if the number is a multiple of 5, divisible by 7 but not by 11:


// #include <stdio.h>

// int main() {
    // int num;


    // printf("Enter a number: ");
    // scanf("%d", &num);

    
    // if (num % 5 == 0 && num % 7 == 0 && num % 11 != 0) {
        // printf("%d is a multiple of 5 and divisible by 7 but not by 11.\n", num);
    // } else {
        // printf("%d does not meet the conditions.\n", num);
    // }
// 
    // return 0;
// }


// Write a program to check whether the entered year is leap year or not (a year is leap if it is divisible by 4 and divisible by 100 or 400.)

// #include <stdio.h>

// int main() {
    // int year;

    
    // printf("Enter a year: ");
    // scanf("%d", &year);

    
    // if (year % 4 == 0) {
        // if (year % 100 == 0) {
            // if (year % 400 == 0) {
                // printf("%d is a leap year.\n", year);
            // } else {
                // printf("%d is not a leap year.\n", year);
            // }
        // } else {
            // printf("%d is a leap year.\n", year);
        // }
    // } else {
        // printf("%d is not a leap year.\n", year);
    // }

    // return 0;
// }

// Write a program to read the values of coefficients a, b and c of a quadratic equation ax2+bx+c=0 and find roots of the equation.

// #include <stdio.h>
// #include <math.h>

// int main() {
    // float a, b, c, discriminant, root1, root2;

    // printf("Enter coefficients a, b and c: ");
    // scanf("%f %f %f", &a, &b, &c);

    
    // discriminant = b * b - 4 * a * c;

    
    // if (discriminant > 0) {
        // root1 = (-b + sqrt(discriminant)) / (2 * a);
        // root2 = (-b - sqrt(discriminant)) / (2 * a);
        // printf("Roots are real and different: %.2f and %.2f\n", root1, root2);
    // } else if (discriminant == 0) {
        // root1 = root2 = -b / (2 * a);
        // printf("Roots are real and the same: %.2f\n", root1);
    // } else {
        // printf("Roots are complex and different.\n");
    // }

    // return 0;
// }

// Write a C program to find input number is prime or composite.



// #include <stdio.h>

// int main() {
//     int num, i, p = 1;

    
//     printf("Enter a positive integer: ");
//     scanf("%d", &num);

    
//     if (num == 0 || num == 1) {
//         printf("%d is neither prime nor composite.\n", num);
//     }
//     else {
        
//         for (i = 2; i <= num / 2; ++i) {
//             if (num % i == 0) {
//                 P = 0; 
//                 break;
//             }
//         }

//         if (P)
//             printf("%d is a prime number.\n", num);
//         else
//             printf("%d is a composite number.\n", num);
//     }

//     return 0;
// }



