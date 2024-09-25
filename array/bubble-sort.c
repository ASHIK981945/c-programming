#include<stdio.h>

int main(){
    int numbers[5]={640,34,65,112,22};//array to be sorted
    int side=5;//size of the array
    int temp; // temporary variable for swapping
    // printing the original array
    printf("Original array:\n");
    for(int i=0;i<side;i++){
    //bubble sort algorithm
    for(int i=0;i<side-1;i++){ // check with element
        for(int j=0;j<side-i-1;j++){

// some talbe about it.
//    i   |    j  |    j+1 |  j >j+1 | a  
//    0   |    0  |      1 |   640>34|  34,640
//        |    1  |     2  |  640>65 |  34,65,640
//        |    2  |     3  |  640>112| 34,65,112,640
//        |    3  |     4  |   640>22|  22, 34,65,112,640
            if(numbers[j]>numbers[j+1]){
                // swap numbers[j]andnumbers[j+1];
                temp=numbers[j];//640,640,640,640
                numbers[j]=numbers[j+1];//34,65,112,22
                numbers[j+1]=temp;//640,640,640,640
            }
        }
    }
    }
    //print the sorted array
    printf("sorted array in ascending order:\n");
    for(int i=0;i<side;i++){
        printf("%d ",numbers[i]);
        }
        return 0;
}