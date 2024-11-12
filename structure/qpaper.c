
// #include <stdio.h>

// struct student{
//     int roll;
//     char name[50];
//     char address[50];
//     float marks[5];
// };

// int main (){
//     struct student student1;
   
//     for(int j=0;j<35;j++){
//         printf("Enter student roll: ",j+1);
//         scanf("%d",&student1.roll);
//         printf("Enter student name: ",j+1);
//         getchar();
//         fgets(student1.name,sizeof(student1.name),stdin[j]);
//         printf("Enter student address: ",j+1);
//         getchar();
//         fgets(student1.address,sizeof(student1.address),stdin[j]);
//         printf("Enter marks for 5 subjects:\n");
//         printf("Enter marks for subject %d: ",j+1);
//         scanf("%f",&student1.marks[j]);
//         }
//         float total = 0;
//         for (int i = 0; i <35; i++) {
//             total += student1.marks[i];
//             }
//             float average = total / 35;
//             printf("Student ID: %d\n", student1.roll);
//             printf("Student Name: %s\n", student1.name);
//             printf("student adder :%s\n",student1.address);
//             printf("Average Grade: %.2f\n", average);
// }




#include <stdio.h>


struct Employee{
    char name[50];
    int salary;
    char address[50];
}

int main(){

    struct Employee e1;
    printf("Enter employee name: ");
    getchar();
    fgets(e1.name,sizeof(e1.name),stdin);
    printf("Enter employee salary: ");
    scanf("%d",&e1.salary);
    printf("Enter employee address: ");
    getchar();
    fgets(e1.address,sizeof(e1.address),stdin);

 for (int i = 0; i < 3; i++) {
        printf("Enter student ID for student %d: ", i + 1);
        scanf("%d", &students[i].id);
        printf("Enter student name for student %d: ", i + 1);
        getchar(); // Clear the newline character from the input buffer
        fgets(students[i].name, sizeof(students[i].name), stdin);
        
 }
}


























