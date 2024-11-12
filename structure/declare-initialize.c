/*
WAP to create a structure with member id , name and grade and display 
student into along with the average grade
*/

// #include <stdio.h>

// // Define a structure named Student
// struct Student {
//     int id;
//     char name[50];
//     float grades[5]; // Array to store grades for 5 subjects
// };

// int main() {
//     // Declare and initialize a structure variable
//     struct Student student1 = {
//         1,                       // ID
//         "Alice Johnson",         // Name (direct assignment)
//         {85.5, 90.0, 78.0, 92.5, 88.0} // Grades
//     };

//     // Calculate and display average grade
//     float total = 0;
//     for (int i = 0; i < 5; i++) {
//         total += student1.grades[i];
//     }
//     float average = total / 5;

//     printf("Student ID: %d\n", student1.id);
//     printf("Student Name: %s\n", student1.name);
//     printf("Average Grade: %.2f\n", average);

//     return 0;
// }


// #include <stdio.h>

// struct student{
//     int id;
//     char name[50];
//     float grades[5];
// };
// int main(){
//     struct student student1;
//     // ask input from user of student 1
//     printf("Enter student id: ");
//     scanf("%d",&student1.id);
//     printf("Enter student name: ");
//     getchar();// clear the newline character form the input buffer
//     fgets(student1.name,sizeof(student1.name),stdin);
//     for(int j=0;j<5;j++){
//         printf("enter grade for subject %d for student1:",j +1,i+1);
//         scanf("%f",&student1.grades[j]);
//         }
//         // calculate average grade
//         float total = 0;
//         for (int i = 0; i < 5; i++) {
//             total += student1.grades[i];
//             }
//             float average = total / 5;
//             // display student details
//             printf("Student ID: %d\n", student1.id);
//             printf("Student Name: %s\n", student1.name);
//             printf("Average Grade: %.2f\n", average);
//             return 0;

// }

