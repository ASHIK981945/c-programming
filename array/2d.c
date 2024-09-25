// 2d;dimensional array
// matril  row *column
// syntax ; datatypes, arrayname[rowsize][columnsize]
 // int arr1[2][3]={1,2,3,4,5,6};
 // int arr2[2][3]={1,2,3,4,5,6};
 

//  #include <stdio.h>

//  int main(){
//     //declaring and initializing a 2D array with 2 rows and columns
//     int matrix[2][3] = {{1,2,3},// first row
//     {4,5,6}  //second row
//     };
//     //access the element in an array
//     printf(" the element at 1 row and 3 column is %d\n",matrix[0][2]); 
//     // update the value at 1 row and 3 column
//     matrix[0][2] = 30;
//     printf(" the element at 1 row and 3 column is %d\n",matrix[0][2]);
//     // printing the 2d array

// //  tables about loop
// //   i      j     ij   p
// //   0      o     oo   1
// //   0      1     01   2
// //   0      2     02   3
// //   0      3     00   0
// //   1      0     10   4
// //   0      1     01   5
// //   0      2     02   6
// //   0      3     00   0 
//     printf("the matrix is\n");
//     for(int i= 0 ;i< 2 ; i++){ // loop over rows
//         for(int j=0 ; j<3 ; j++){ // loop over coluumns
//             printf("%d",matrix[i][j]); // access each element using matrix[i][j]
//         }
//         printf("\n");// move to the next line after each row
//     }
//     return 0;

//  }



// #include <stdio.h>

// int main(){
//      int a = {{1,2,3}, {4,5,6}}
//      int b = {{10,20,30},{40,50.60}}
//       c = a+b
//      printf(" the element is %d\n",c);

// }


#include <stdio.h>

int main() {
    int matrix1[2][2] = { {1, 2,3}, {4, 4} }; // First 2x2 matrix
    int matrix2[2][2] = { {5, 6}, {7, 8} }; // Second 2x2 matrix
    int result[2][2]; // To store the result

    // Adding the two matrices
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Printing the result matrix
    printf("Resultant matrix after addition:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}