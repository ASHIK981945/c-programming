#include <stdio.h>
#include <math.h>
#define  conversion_rate 1.6;
int main(){
    
    float currency,amout;
    printf("enter the you currency:");
    scanf("%f",&currency);
    amout=currency*conversion_rate;
    printf("the  the amount in the target currency. %.2f is:%.2f\n",currency,amout);
    return 0;
    
}