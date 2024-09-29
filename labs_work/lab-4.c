// Objective(s): To understand the programming using Loop & nested loop Statements (for, while, do-while)\

// Write a program to input two integer numbers and display the sum of even numbers between these two input numbers.

// #include <stdio.h>

// int main() {
//     int start, end, sum = 0;

    
//     printf("Enter two numbers: ");
//     scanf("%d %d", &start, &end);

//     for (int i = (start < end ? start : end); i <= (start > end ? start : end); i++) {
//         if (i % 2 == 0) {
//             sum += i;
//         }
//     }

//     printf("Sum of even numbers: %d\n", sum);
//     return 0;
// }


// Write a program to find GCD (greatest common divisor or HCF) and LCM (least common multiple) of two numbers.

// #include <stdio.h>

// int gcd(int a, int b) {
//     while (b != 0) {
//         int temp = b;
//         b = a % b;
//         a = temp;
//     }
//     return a;
// }

// int main() {
//     int num1, num2, hcf, lcm;

//     printf("Enter two numbers: ");
//     scanf("%d %d", &num1, &num2);

    
//     hcf = gcd(num1, num2);

    
//     lcm = (num1 * num2) / hcf;

//     printf("GCD: %d\n", hcf);
//     printf("LCM: %d\n", lcm);

//     return 0;
// }


// Write a program to display Fibonacci series of last term up to 300.

// #include <stdio.h>

// int main() {
//     int a = 0, b = 1, next;

//     printf("Fibonacci series up to 300: \n");
//     printf("%d %d ", a, b);

//     next = a + b;
//     while (next <= 300) {
//         printf("%d ", next);
//         a = b;
//         b = next;
//         next = a + b;
//     }

//     printf("\n");
//     return 0;
// }

/* WAP to calculate the sum of the series p+p^2+p^3+p^4+....+p^n, 
where p is the base and n is the number of terms
*/

// #include <stdio.h>
// #include <math.h>

// int main() {
//     int p, n, sum = 0;


//     printf("Enter the base (p): ");
//     scanf("%d", &p);
//     printf("Enter the number of terms (n): ");
//     scanf("%d", &n);

    
//     for (int i = 1; i <= n; i++) {
//         sum += pow(p, i);
//     }

//     printf("Sum of the series: %d\n", sum);
//     return 0;
// }


// Write a program in C to find all possible roots of quadratic equation ax^2+bx+c=0.

// #include <stdio.h>
// #include <math.h>

// int main() {
//     float a, b, c, discriminant, root1, root2;


//     printf("Enter coefficients a, b and c: ");
//     scanf("%f %f %f", &a, &b, &c);

    
//     discriminant = b * b - 4 * a * c;

//     if (discriminant > 0) {
//         root1 = (-b + sqrt(discriminant)) / (2 * a);
//         root2 = (-b - sqrt(discriminant)) / (2 * a);
//         printf("Roots are real and different: %.2f and %.2f\n", root1, root2);
//     } else if (discriminant == 0) {
//         root1 = root2 = -b / (2 * a);
//         printf("Roots are real and the same: %.2f\n", root1);
//     } else {
//         printf("Roots are complex and different.\n");
//     }

//     return 0;
// }

/*
WAP to display the following patters:
*/


/*
a. 

*****
*****
*****
*****
*****

*/

// #include <stdio.h>

// int main() {
//     for (int i = 0; i < 5; i++) {
//         for (int j = 0; j < 5; j++) {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }


/*
b.
1
1   2
1   2   3
1   2   3   4
1   2   3   4   5
*/

// #include <stdio.h>

// int main() {
//     for (int i = 1; i <= 5; i++) {
//         for (int j = 1; j <= i; j++) {
//             printf("%d ", j);
//         }
//         printf("\n");
//     }
//     return 0;
// }


/*
c.

5   10  15  20
10  15  20  25
15  20  25  30
20  25  30  35
*/

// #include <stdio.h>

// int main() {
//     for (int i = 5; i <= 20; i += 5) {
//         for (int j = i; j < i + 15; j += 5) {
//             printf("%d ", j);
//         }
//         printf("\n");
//     }
//     return 0;
// }


/*
d.

Programming
rogramming
ogramming
gramming
ramming
amming
mming
ming
ing
ng
g
*/

// #include <stdio.h>
// #include <string.h>

// int main() {
//     char str[] = "Programming";
//     int len = strlen(str);

//     for (int i = 0; i < len; i++) {
//         printf("%s\n", str + i);
//     }
//     return 0;
// }


/*
e.

1   6   10  13  15
2   7   11  14
3   8   12 
4   9
5
*/

// #include <stdio.h>

// int main() {
//     int n = 5;

//     for (int i = 1; i <= n; i++) {
//         for (int j = i; j <= n; j++) {
//             printf("%d ", j + (i - 1) * (n - i));
//         }
//         printf("\n");
//     }

//     return 0;
// }


/*
f.

   *
  ***
 *****
*/

// #include <stdio.h>

// int main() {
//     int rows = 3, k = 0;

//     for (int i = 1; i <= rows; i++, k = 0) {
//         for (int space = 1; space <= rows - i; space++) {
//             printf(" ");
//         }

//         while (k != 2 * i - 1) {
//             printf("*");
//             k++;
//         }
//         printf("\n");
//     }

//     return 0;
// }


/*

 g.

 1  0   1   0   1
    0   1   0   1
        1   0   1
            0   1
                1

*/

// #include <stdio.h>

// int main() {
//     int n = 5;

//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < i; j++) {
//             printf(" ");
//         }
//         for (int j = i; j < n; j++) {
//             printf("%d ", (i + j) % 2);
//         }
//         printf("\n");
//     }

//     return 0;
// }

