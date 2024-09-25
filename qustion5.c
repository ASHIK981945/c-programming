#include<stdio.h>
#include<math.h>

int main(){
    float princple,rate ,time,SI;
    printf("Enter the principal amount:");
    scanf("%f", &princple);
    printf("Enter the rate of interest:");
    scanf("%f", &rate);
    printf("Enter the time in years:");
    scanf("%f", &time);
    SI = princple(pow(1+rate/100),time);
    printf("simple interset=%f",SI);

    return 0;

}
