#include<stdio.h>
#include<math.h>
int main()
{
        int x,n, sum = 0, i;
    printf("Enter values of x and n:\n ");
        scanf("%d%d", &x ,&n);
        for (i = 1; i <= n; i++)
        {
            if(i%2 == 0)
            sum = sum - pow(x,i);
            else
            sum = sum + pow(x,i);
        }
        printf("sum = %d",sum);73
return 0;
}