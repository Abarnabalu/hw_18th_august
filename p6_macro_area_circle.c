#include<stdio.h>
#define pi 3.14
int main()
{
int r;
float area;
printf("Enter the radius:\n");
scanf("%d",&r);
area=pi*r*r;
printf("Area is:%.2f",area);
return 0;
}

