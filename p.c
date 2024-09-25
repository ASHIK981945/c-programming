// #include <stdio.h>
// int main() {
//     int number, digit, sum = 0;

//     // Prompt user to enter a number
//     printf("Enter a number: ");
//     scanf("%d", &number);

//     // Process each digit of the number
//     while (number > 0) {
//         digit = number % 10; // Extract the last digit

//         // Check if the digit is even
//         if (digit % 2 == 0) {
//             sum += digit; // Add even digit to sum
//         }

//         number /= 10; // Remove the last digit
//     }

//     // Output the result
//     printf("Sum of even digits: %d\n", sum);

//     return 0;
// }


// #include <stdio.h>

// int main() {
//     int n, i;
//     int t1 = 1, t2 = 1, nextTerm;

//     // Prompt user to enter the number of terms
//     printf("Enter the number of terms: ");
//     scanf("%d", &n);

//     printf("Fibonacci Sequence: ");

//     // Print the first two terms
//     printf("%d, %d", t1, t2);

//     // Generate the rest of the sequence
//     for (i = 3; i <= n; ++i) {

//         nextTerm = t1 + t2;
//         printf(", %d", nextTerm);

//         // Update terms
//         t1 = t2;
//         t2 = nextTerm;
//     }

//     printf("\n");
//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int i = 1;
//     float marks, sum = 0, average;

//     // Loop to get the marks of five subjects
//     while (i <= 5) {
//         printf("Enter marks for subject %d: ", i);
//         scanf("%f", &marks);

//         sum += marks; // Add the marks to the sum
//         i++; // Move to the next subject
//     }

//     // Calculate the average
//     average = sum / 5;

//     // Output the sum and average
//     printf("Sum of marks: %.2f\n", sum);
//     printf("Average of marks: %.2f\n", average);

//     return 0;
// }


// #include <stdio.h>

// int main() {
//     int number, originalNumber, remainder, reversedNumber = 0;

//     // Prompt the user to enter a number
//     printf("Enter an integer: ");
//     scanf("%d", &number);

//     originalNumber = number; // Store the original number

//     // Reverse the number
//     while (number != 0) {
//         remainder = number % 10; // Extract the last digit
//         reversedNumber = reversedNumber * 10 + remainder; // Append the digit to the reversed number
//         number /= 10; // Remove the last digit
//     }

//     // Check if the original number and the reversed number are the same
//     if (originalNumber == reversedNumber) {
//         printf("%d is a palindrome.\n", originalNumber);
//     } else {
//         printf("%d is not a palindrome.\n", originalNumber);
//     }

//     return 0;
// }


// #include <stdio.h>
// int main() {

//     int num1, num2, sum;

//     // Prompt the user to enter the first number
//     printf("Enter first number: ");
//     // Read the first number from the user
//     scanf("%d", &num1);

//     // Prompt the user to enter the second number
//     printf("Enter second number: ");
//     // Read the second number from the user
//     scanf("%d", &num2);

//     // Calculate the sum of the two numbers
//     sum = num1 + num2;

//     // Display the sums
//     printf("The sum of %d and %d is %d\n", num1, num2, sum);

//     return 0;
// }