/*
    *
   ***
  *****
 *******
*********
*/

// #include <stdio.h>

// int main() {
//     int rows = 5, k = 0;

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


// #include <stdio.h>

// int main() {
//     for ( int i=1 ; i<=5;i++){
//             for (int j =1;j<=5-i;j++){
//     printf(" ");
//     }
// for ( int k=1 ,k<=j;++){
//     printf("*");
// }
//     printf("\n");
// }
//     return 0;
    
// }


/*
if the two values are the same , then return triple their
sum
*/

// #include <stdio.h>

// int main(){
//     int n,i,sum;
//     printf("enter the you number1:\n");
//     scanf("%d",&n);
//     printf("enter the you number2:\n");
//     scanf("%d",&i);
//     if(n=i){
//         printf("%d",(n+1)*3);
//     }
//     else{
//         sum =n+i;
//         printf("%d",sum);

//     }
//     return 0;
// }



/*
1 0 1 0 1
  0 1 0 1
    1 0 1
      0 1
        1              
*/




// #include <stdio.h>

// int main() {
//     int n = 5;

//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <=i; j++) {
//             printf("");
//         }
//         for (int k = i; k < n-1; k++) {
//             printf("%d ", (k +1) %2);
//         }
//         printf("\n");
//     }

//     return 0;
// }

/*
1
12
123
1234
12345 */


#include <stdio.h>

int main (){
  int i,j;
    for (i=1; i<6; i++){
        for (j=1; j<i; j++)
            printf("%d\t", i);
          printf("\n");
    
}
return 0;
}