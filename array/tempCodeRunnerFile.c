
#include <stdio.h>
int main(){
  int num[5];
  int i;
  float sum=0;

int highest=0,lowest=1000;
for (i = 0; i < 5; i++) {
  printf("enter the marks of student %d\n", i + 1);
  scanf("%d", &num[i]);
  sum=sum+num[i];
if(num[i]>highest)
  highest=num[i];
if(num[i]<lowest)
 lowest=num[i];
}
printf("average mark is:%f\n",sum/5);

printf("highest mark is:%d\n",highest);
printf("lowest mark is:%d\n",lowest);
return 0;
}