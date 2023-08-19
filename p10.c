#include<stdio.h>
int main()
{
char id[10];
float sh,ts;
int wh;
printf("Enter the employee ID:\n");
scanf("%s",&id);
printf("Enter salary per hour:\n");
scanf("%f",&sh);
printf("Enter worked hours:\n");
scanf("%d",&wh);
ts=wh*sh;
printf("ID:%s\n Salary:%.2f\n",id,ts);
return 0;
}
