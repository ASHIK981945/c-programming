//1-dimensional[1,2,3,4,];-A one dimensional array in C contains a series of elements of the same datatype. The elements are zero-indexed, meaning the first element is in position or index 0, and the last element is in position or index (array size) - 1.
//2-dimensional 2*4  ROWS COLUMN
// int MATRIX [2] rows-count [3] column-count

// #include <stdio.h>
// int main()
// {
  //declear an  array 
//   int num [5];
  // initialize an array
//   num [0] =1;
//   num [1]=12;
//   num [2]=13;
//   num [3]=15;
//   num[4]=100;
  //one line initializetion
//   int num[5]={1,2,3,4,5};
//   num[0]=300;
//   printf("%d\n",num[0]);
// return 0;
// }

//wap to store marks of 5 students and display them
// #include <stdio.h>
// int main(){
//      int num[5]={44,32,24,56,49};
     
// for ( int i = 0; i < 5; i++) {
//   printf("marks of students are:%d\n",num[i]);
// }
// return 0;
// }


//wap to store marks of 5 students and display them
// #include <stdio.h>

// int main() {
//     int num[5];
//     int i;

//     for (i = 0; i < 5; i++) {
//         printf("enter the marks of student %d\n", i + 1);
//         scanf("%d", &num[i]);
//     }

//     for (i = 0; i < 5; i++) {
//         printf("marks of student %d are: %d\n", i + 1, num[i]);
//     }

//     return 0;
// }

//wap to store mark of top 5 students and 
//1 display the average mark
//2 display the highest mark
//3 display the lowest mark


// #include <stdio.h>
// int main(){
//   // initialize an array
//   int A=5;
//   int num[A]; //declear an  array 
//   int i;
//   float sum=0;
// int highest=0,lowest=100;
// // datatype arrayname[size];
// // array index start from 0 
// //  flot marks[5]={12,34,2.3,32,54}
// for (i = 0; i < A; i++) { // in loop
//   printf("enter the marks of student %d\n", i + 1);//ENTER THE MARK OF STUDENT
//   scanf("%f", &num[i]);
//   //TODO::FIND THE LOWESST AND HIGHEST MARKS
//   //TODO::SEARCH 50 AND DISPLAY THE RESULT(FOUND:50).iF NOT FOUND DISPALY
//   //(SORRY:50 NOT FOUND)
//   sum+=num[i];
// if(num[i]>highest)
//   highest=num[i];
// if(num[i]<lowest)
//   lowest=num[i];
// }
// //TODO::FIND THE AVERAGE MARKS
// printf("average marks is:%f\n",sum/A);
// //TODO ::FIND THE HIGHEST MARKS
// printf("highest marks is:%d\n",highest);
// //TODO ::FIND THE LOWEST MARKS
// printf("lowest marks is:%d\n",lowest);
// return 0;
// }


// #include<stdio.h>
// int main(){

//   for (int 1 = 0; i <5; i++ );
//   float m;
//   scanf("%f", &m);
//   marks[i] = m;
//   return 0;
// }


// #include<stdio.h>
//  int main()
// {
//   int numbers[7]={95,86,10,20,300,40,50};
//     printf("the element of the array are \n");
//   int lowest = numbers[0],highest=numbers[0];
//   for (int i = 0; i < 7; i++)
//   {
//     printf("%d\n",numbers[i]);
//     if (numbers[i] < lowest){
//     lowest = numbers[i];
//     }
//     if (numbers[i] > highest){
//       highest = numbers[i];
//       }
//   }
//     printf("the lowest element of the array is %d\n", lowest);
//     printf("the highest element of the array is %d\n", highest);
//   return 0;
// }