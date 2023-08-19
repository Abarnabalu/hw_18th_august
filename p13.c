#include<stdio.h>
int main()
{
int inte;
float decimal;
char charac;
long int longinte;
unsigned long int uli;

printf("enter integer: ");
scanf("%d",&inte);
printf("enter decimal: ");
scanf("%f",&decimal);
printf("enter character: ");
scanf(" %c",&charac);
printf("enter long integer: ");
scanf("%l ",&longinte);
printf("enter unsigned long integer: ");
scanf(" %ul",&uli);
printf("integer:%d\n float:%f\n character:%c\n long integer:%ld\n unsigned:%lu",inte,decimal,charac,longinte,uli);
return 0;
}
