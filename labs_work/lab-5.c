/*
Objective(s):
To understand programming using different dimensions of Array.
*/

//Write a program to enter 10 floating numbers in an array and display it.

// #include <stdio.h>

// int main() {
//     float arr[10];

//     printf("Enter 10 floating point numbers:\n");
//     for (int i = 0; i < 10; i++) {
//         scanf("%f", &arr[i]);
//     }

    
//     printf("You entered:\n");
//     for (int i = 0; i < 10; i++) {
//         printf("%.2f ", arr[i]);
//     }
//     printf("\n");

//     return 0;
// }


//Write a program to display largest and smallest element of an array defined in Q.No. 1.


// #include <stdio.h>

// int main() {
//     float arr[10], largest, smallest;

//     printf("Enter 10 floating point numbers:\n");
//     for (int i = 0; i < 10; i++) {
//         scanf("%f", &arr[i]);
//     }

//     largest = smallest = arr[0];

    
//     for (int i = 1; i < 10; i++) {
//         if (arr[i] > largest) {
//             largest = arr[i];
//         }
//         if (arr[i] < smallest) {
//             smallest = arr[i];
//         }
//     }

//     printf("Largest element: %.2f\n", largest);
//     printf("Smallest element: %.2f\n", smallest);

//     return 0;
// }


// Write a program to initialize one dimensional array of size 8 and display the sum and average of array elements

// #include <stdio.h>

// int main() {
//     int arr[8] = {10, 20, 30, 40, 50, 60, 70, 80};
//     int sum = 0;
//     float average;


//     for (int i = 0; i < 8; i++) {
//         sum += arr[i];
//     }

//     average = sum / 8.0;

//     printf("Sum: %d\n", sum);
//     printf("Average: %.2f\n", average);

//     return 0;
// }


// Write a program to read two matrices of order 3 * 2, add them and display the resultant matrix in matrix form.

// #include <stdio.h>

// int main() {
//     int matrix1[3][2], matrix2[3][2], result[3][2];

//     printf("Enter elements of first matrix (3x2):\n");
//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 2; j++) {
//             scanf("%d", &matrix1[i][j]);
//         }
//     }

//     printf("Enter elements of second matrix (3x2):\n");
//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 2; j++) {
//             scanf("%d", &matrix2[i][j]);
//         }
//     }


//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 2; j++) {
//             result[i][j] = matrix1[i][j] + matrix2[i][j];
//         }
//     }

    
//     printf("Resultant matrix after addition:\n");
//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 2; j++) {
//             printf("%d ", result[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }

//Write a program to multiply two 3*3 matrix.

// #include <stdio.h>

// int main() {
//     int matrix1[3][3], matrix2[3][3], result[3][3];

//     printf("Enter elements of first matrix (3x3):\n");
//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 3; j++) {
//             scanf("%d", &matrix1[i][j]);
//         }
//     }


//     printf("Enter elements of second matrix (3x3):\n");
//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 3; j++) {
//             scanf("%d", &matrix2[i][j]);
//         }
//     }

    
//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 3; j++) {
//             result[i][j] = 0;
//             for (int k = 0; k < 3; k++) {
//                 result[i][j] += matrix1[i][k] * matrix2[k][j];
//             }
//         }
//     }

    
//     printf("Resultant matrix after multiplication:\n");
//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 3; j++) {
//             printf("%d ", result[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }


// Write a program to read a string and check for palindrome without using string related function (a string is palindrome if its half is mirror by itself eg: abcdcba).


// #include <stdio.h>

// int main() {
//     char str[100];
//     int length = 0, isPalindrome = 1;

    
//     printf("Enter a string: ");
//     scanf("%s", str);

    
//     while (str[length] != '\0') {
//         length++;
//     }

    
//     for (int i = 0; i < length / 2; i++) {
//         if (str[i] != str[length - i - 1]) {
//             isPalindrome = 0;
//             break;
//         }
//     }

//     if (isPalindrome) {
//         printf("The string is a palindrome.\n");
//     } else {
//         printf("The string is not a palindrome.\n");
//     }

//     return 0;
// }

// Write a program to compute the sum of diagonal elements of a square matrix.

// #include <stdio.h>

// int main() {
//     int matrix[3][3], sum = 0;

    
//     printf("Enter elements of a 3x3 matrix:\n");
//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 3; j++) {
//             scanf("%d", &matrix[i][j]);
//         }
//     }

    
//     for (int i = 0; i < 3; i++) {
//         sum += matrix[i][i];  
//     }

//     printf("Sum of diagonal elements: %d\n", sum);

//     return 0;
// }


//