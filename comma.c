// #include <stdio.h>
//     int main(){
//         int a,b,c;
//         // using comma operation
//     a=(b=5,c=3,b+c);
//     // b and c are assigned first then their sum is assigned to a 
//     printf("value of a:%d\n",a);
//     return 0;
// //     }



// #include <stdio.h>
//     int main(){
//         int a,b,c;
//         a=(b=5,c=3,b+c);
//     printf("value of a:%d\n",a);
//     return 0;
//     }


//     #include <stdio.h>
// // #include <conio.h>
// int main()
// {
// int i,j,k,samp=1;
// // clrscr();
// for(i=5; i>=1; i--)
// {
// for(k=samp; k>=0; k--)
// {
// printf(" "); // only 1 space
// }
// for(j=i; j>=1; j--)
// {
// printf("*");
// }
// samp = samp + 1;
// printf("\n");
// }
// // getch();
// return 0;
// }

#include <stdio.h>
// #include <conio.h>
int main()
{
int i,j,k,t=0;
// clrscr();
for(i=1; i<=5; i++)
{
for(k=t; k<5; k++)
{
printf(" ");
}
for(j=0; j< i; j++)
{
printf(" * ");
t = t + 1;
}
printf("\n");
}
// getch();
  return 0;
}
  
  