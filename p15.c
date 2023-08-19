#include <stdio.h>
int main()
{
float a;
printf("enter the value:\n");
scanf("%f",&a);
printf("float value upto 5 decimals:%.5f\n",a);
printf("float value upto 4 decimals:%.4f\n",a);
printf("float value upto 3 decimals:%.3f\n",a);
printf("float value upto 2 decimals:%.2f\n",a);
printf("float value upto 1 decimals:%.1f\n",a);
return 0;
}
