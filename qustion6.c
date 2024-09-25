#include <stdio.h>




int main() {
    float length = 5.0; 
    float width = 3.0;  

    float  perimeter = 2 * (length + width);
    float  area = length * width;

    printf("The perimeter of the rectangle is: %.2f units\n", perimeter);
    printf("The area of the rectangle is: %.2f square units\n", area);

    return 0;
}