#include <stdio.h>

// search 300;
// find the highest and lowest
int main() {
    int numbers[7] = {95, 86, 100, 20, 300, 40, 10};

    // print the array elements
    printf("The elements of the array are \n");

    int lowest = numbers[0]; // 95 
    int highest = numbers[0]; // 95
    int search = 500;
    int found = 0;
    printf("Can you search for %d \n", search);
    for(int i = 0; i < 7; i++) {
        printf("%d ", numbers[i]);

        if (numbers[i] < lowest) {
            lowest = numbers[i];
        }

        if (numbers[i] > highest) {
            highest = numbers[i];
        }

        if (numbers[i] == search) {
            found = 1;
        }
    }

    if (found == 1) {
        printf("\nYes i found %d \n", search);
    } else {
        printf("Sorry..\n");
    }
    printf(" \n The lowest number in the array is : %d and highest is %d", lowest, highest);
}
// sorting
// bubble sorting 
// left side smallest & right side maximun value
// space & time complexity o(n)
// a=[10,3,24,45,40]
// compare the adjaeent element
// s1;[3,10,24,45,40]
// s2;[3,10,24,45,40]
// s3;[3,10,24,45,40]
// s4;[3,10,24,40,45]
