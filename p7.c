#include <stdio.h>
#ifdef a
    #define m 'Hi'

#endif
#ifndef a
    #define m 'Bye'
#endif

int main()
{
char a;
printf("%s",m);
return 0;
}
