 // Write a program to find biggest among three numbers using pointer.

// #include <stdio.h>

// void findLargest(int *a, int *b, int *c, int *largest) {
//     if (*a > *b && *a > *c) {
//         *largest = *a;
//     } else if (*b > *c) {
//         *largest = *b;
//     } else {
//         *largest = *c;
//     }
// }

// int main() {
//     int num1, num2, num3, largest;

//     // Input three numbers
//     printf("Enter the first number: ");
//     scanf("%d", &num1);
//     printf("Enter the second number: ");
//     scanf("%d", &num2);
//     printf("Enter the third number: ");
//     scanf("%d", &num3);

//     // Call the function to find the largest number
//     findLargest(&num1, &num2, &num3, &largest);

//     // Display the result
//     printf("The largest number is: %d\n", largest);

//     return 0;
// }


// Write a program to find the sum of all the elements of an array using pointers.

// #include <stdio.h>

// int sumOfArray(int *arr, int size) {
//     int sum = 0;
//     for (int i = 0; i < size; i++) {
//         sum += *(arr + i); // Add each element using pointer arithmetic
//     }
//     return sum;
// }

// int main() {
//     int size;

//     // Input the size of the array
//     printf("Enter the number of elements in the array: ");
//     scanf("%d", &size);

//     int arr[size];

//     // Input array elements
//     printf("Enter %d elements: ", size);
//     for (int i = 0; i < size; i++) {
//         scanf("%d", &arr[i]);
//     }

//     // Calculate sum of array elements
//     int sum = sumOfArray(arr, size);

//     // Display the sum
//     printf("The sum of all elements in the array is: %d\n", sum);

//     return 0;
// } 

// Write a program to swap value of two variables using pointer.

// #include <stdio.h>

// // Function to swap values of two variables using pointers
// void swap(int *a, int *b) {
//     int temp;
//     temp = *a; // Store the value of a in temp
//     *a = *b;   // Assign the value of b to a
//     *b = temp; // Assign the value of temp (old a) to b
// }

// int main() {
//     int x, y;

//     // Input values of x and y
//     printf("Enter the value of x: ");
//     scanf("%d", &x);
//     printf("Enter the value of y: ");
//     scanf("%d", &y);

//     // Display values before swapping
//     printf("\nBefore swapping: x = %d, y = %d\n", x, y);

//     // Call the swap function
//     swap(&x, &y);

//     // Display values after swapping
//     printf("After swapping: x = %d, y = %d\n", x, y);

//     return 0;
// }


// Write a program to read a sentence and count the number of characters &words in that sentence.

// #include <stdio.h>
// #include <string.h>

// // Function to count characters and words
// void countCharsAndWords(char *sentence, int *char_count, int *word_count) {
//     *char_count = 0;
//     *word_count = 0;
//     int inWord = 0; // Flag to check if currently inside a word

//     for (int i = 0; sentence[i] != '\0'; i++) {
//         if (sentence[i] != ' ') {
//             (*char_count)++;
//             if (!inWord) {
//                 inWord = 1; // Start of a new word
//                 (*word_count)++;
//             }
//         } else {
//             inWord = 0; // Outside of a word
//         }
//     }
// }

// int main() {
//     char sentence[1000];
//     int char_count, word_count;

//     printf("Enter a sentence: ");
//     fgets(sentence, sizeof(sentence), stdin); // Read sentence from user

//     // Remove newline character from fgets if present
//     sentence[strcspn(sentence, "\n")] = '\0';

//     countCharsAndWords(sentence, &char_count, &word_count);

//     printf("Number of characters (excluding spaces): %d\n", char_count);
//     printf("Number of words: %d\n", word_count);

//     return 0;
// }


// Write a program to read a sentence & delete all the white spaces. Replace all “.” by “:”

//  #include <stdio.h>

// // Function to remove spaces and replace '.' with ':'
// void modifyString(char *str) {
//     char *readPtr = str, *writePtr = str;
    
//     // Remove all white spaces
//     while (*readPtr) {
//         if (*readPtr != ' ') {
//             *writePtr = *readPtr;
//             writePtr++;
//         }
//         readPtr++;
//     }
//     *writePtr = '\0';  // Null-terminate the modified string
    
//     // Replace '.' with ':'
//     for (readPtr = str; *readPtr != '\0'; readPtr++) {
//         if (*readPtr == '.') {
//             *readPtr = ':';
//         }
//     }
// }

// int main() {
//     char sentence[100];
    
//     printf("Enter a sentence: ");
//     fgets(sentence, sizeof(sentence), stdin);  // Read the sentence including spaces

//     // Modify the string by removing spaces and replacing '.'
//     modifyString(sentence);
    
//     printf("Modified sentence: %s\n", sentence);
    
//     return 0;
// }

// Write a program to copy one string to another string with and without using string handling function

// #include <stdio.h>
// #include <string.h>

// // Function to copy string using strcpy
// void copy_using_strcpy(char *source, char *destination) {
//     strcpy(destination, source);
// }

// // Function to copy string without using strcpy
// void copy_without_strcpy(char *source, char *destination) {
//     while (*source != '\0') {
//         *destination = *source;
//         source++;
//         destination++;
//     }
//     *destination = '\0';  // Add null terminator at the end
// }

// int main() {
//     char source[] = "Hello, World!";
//     char destination1[50];  // Destination array for strcpy
//     char destination2[50];  // Destination array for manual copy

//     // Copy using strcpy
//     copy_using_strcpy(source, destination1);
//     printf("Copy using strcpy: %s\n", destination1);

//     // Copy without using strcpy
//     copy_without_strcpy(source, destination2);
//     printf("Copy without using strcpy: %s\n", destination2);

//     return 0;
// }


// Write a program to concatenate two strings.


// #include <stdio.h>

// // Function to concatenate two strings
// void concatenate(char *str1, char *str2) {
//     // Move the pointer to the end of str1
//     while (*str1 != '\0') {
//         str1++;
//     }

//     // Copy str2 to the end of str1
//     while (*str2 != '\0') {
//         *str1 = *str2;
//         str1++;
//         str2++;
//     }

//     // Add the null terminator at the end
//     *str1 = '\0';
// }

// int main() {
//     char str1[100], str2[50];

//     // Input strings from user
//     printf("Enter first string: ");
//     gets(str1);
//     printf("Enter second string: ");
//     gets(str2);

//     // Call the concatenate function
//     concatenate(str1, str2);

//     // Display the concatenated string
//     printf("Concatenated String: %s\n", str1);

//     return 0;
// }


// Write a program to compare two strings.


// #include <stdio.h>

// int compare_strings(char *str1, char *str2) {
//     while (*str1 && *str2) {
//         if (*str1 != *str2) {
//             return -1;  // Strings are different
//         }
//         str1++;
//         str2++;
//     }
//     return (*str1 == *str2) ? 0 : -1;  // Check if both strings ended together
// }

// int main() {
//     char str1[100], str2[100];

//     printf("Enter first string: ");
//     gets(str1);

//     printf("Enter second string: ");
//     gets(str2);

//     if (compare_strings(str1, str2) == 0) {
//         printf("Strings are identical.\n");
//     } else {
//         printf("Strings are different.\n");
//     }

//     return 0;
// }


//Write a program to sort 5 string words stored in an array of pointers.
// #include <stdio.h>
// #include <string.h>

// void sortStrings(char *arr[], int n);

// int main() {
//     // Declare an array of pointers to strings
//     char *arr[5];
//     char str[5][20]; // Array to temporarily store input strings
    
//     printf("Enter 5 words:\n");
//     for (int i = 0; i < 5; i++) {
//         scanf("%s", str[i]);
//         arr[i] = str[i]; // Assign pointers to each string
//     }

//     // Call the function to sort the array of strings
//     sortStrings(arr, 5);

//     printf("\nStrings in sorted order:\n");
//     for (int i = 0; i < 5; i++) {
//         printf("%s\n", arr[i]);
//     }

//     return 0;
// }

// void sortStrings(char *arr[], int n) {
//     char *temp;
//     for (int i = 0; i < n - 1; i++) {
//         for (int j = i + 1; j < n; j++) {
//             if (strcmp(arr[i], arr[j]) > 0) {
//                 // Swap the pointers if arr[i] is lexicographically greater than arr[j]
//                 temp = arr[i];
//                 arr[i] = arr[j];
//                 arr[j] = temp;
//             }
//         }
//     }
// }
