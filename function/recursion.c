// call by value
// ---> cannot change value 
// num is value
// void modifyValue(int num) {
//                 num = 20;}



// call by address /ref
// ---> can change address
// *num is address
// void modifyValue(int *num) {
    // *num = 20; /
    // }

// swap

// x:5 , y:10
// *a=address x
 // *b=address y
//  temp =a
// a=b
// b= tep

// #include<stdio.h>

// int addnumber(int a, int b){
//     return a+b;
// }
// int main(){
//     int result = addnumber(5,3):
//     printf("sum:%d",result);
//     return 0;
//     }

// #include<stdio.h>
// int addnumber(int a,int b);
// int addnumber(int a,int b){
//     return a + b;
// }
// int main(){
//     int result = addnumber(10,20);
//     printf("sum:%d",result);
//     return 0 ;
// }


//  no p no return value

// #include <stdio.h>

// void printmessage(){
//     printf("hello, world!\n");
// }
// int main(){
//     printmessage();
//     return 0;
//     }

// #include <stdio.h>
// void printsum (int a, int b){
//     printf("sum:%d\n",a+b);
// }
// int main (){
//     printsum(10,20);
//     return 0 ;
// }

//  #include <stdio.h>
//  int getnumber(){
//     return 42;
//  }
// int main(){
//     int result = getnumber();
//     printf("result:%d\n",result);
//     return 0 ;
// }

// #include <stdio.h>
// int addnumber(int a, int b){
//     return a + b;
// }
// int main(){
//     int result = addnumber(10,20);
//     printf("sum:%d\n",result);
//     return 0 ;
// }