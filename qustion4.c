// #include <stdio.h> // Include the standard input-output library

// #define PI 3.14159 // Define a symbolic constant for pi 

// int main(){ // Main function where program execution begins
//     float radius,area; // Declare variables to store radius and area
//     printf("enter the radius of the circle:");
//     scanf("%f",&radius);
//     area=PI* radius*radius;
//     printf("the  area of the circle with radius %.2f is:%.2f\n",radius,area);
//     return 0;
// }


// #include <stdio.h> // Include the standard input-output library
// #define PI 3.14159 // Define a symbolic constant for pi 

// int main(){ // Main function where program execution begins
//     float radius,area; // Declare variables to store radius and area
//     const float radius1=100;
//     const float rate=3.5;
//     float area1;
//     const float pie=3.1415;
//     // prompt the useer to enter the radius
//     printf("enter the radius of the circle:");
//     scanf("%f",&radius);// Read the user input and store it in the radius variable
//     area=10;
//     //calculate  the area of the circle using the formula Area=pi*radius^2
//     area=PI* radius*radius;
//     area1=pie* radius1 * radius
//     //Display the calculate area 
//     printf("the  area of the circle with radius %.2f is:%.2f\n",radius,area);

//     return 0;// Return 0 to indicate that the program ended successfully
// }



#include <stdio.h> // Include the standard input-output library
#include <math.h>
#define PI 3.14159 // Define a symbolic constant for pi 

int main(){ // Main function where program execution begins
    float radius,area; // Declare variables to store radius and area
    printf("enter the radius of the circle:");
    scanf("%f",&radius);
    area=PI*(pow(radius,2));
    printf("the  area of the circle with radius %.2f is:%.2f\n",radius,area);
    return 0;
}

