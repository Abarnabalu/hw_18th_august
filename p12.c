#include<stdio.h>
int main()
{
int inte=11;
float decimal=21.67;
char charac='c';
long int longinte=5678;
unsigned long int uli=400;
//printf("integer:%d\n float:%f\n character:%c\n long integer:%ld\n unsigned:%lu",inte,decimal,charac,longinte,uli);
printf("the size of int is :%lu\n",sizeof(int));
printf("the size of float is :%lu\n",sizeof(float));
printf("the size of char is :%lu\n",sizeof(char));
printf("the size of long int is :%lu\n",sizeof(long int));
printf("the size of unsigned long int is :%lu\n",sizeof(unsigned long int));
return 0;
}
