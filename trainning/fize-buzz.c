#include <stdio.h>

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num % 3 == 0 && num % 5 == 0) 
    {
        printf("fizzbuzz");
    } 
        else if (num % 3 == 0) 
    {
        printf("fizz");
    } 
        else if (num % 5 == 0)
    {
        printf("buzz");
    } 
        else 
    {
        printf("%d is not divisible by 3 or 5.\n", num);
    }

    return 0;
}
