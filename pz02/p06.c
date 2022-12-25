#include <stdio.h>
main()
{
 int b1,b2,b3,b4,i,prom;
 printf("\n\nВведите исходное число:");
 scanf("\n%d", &i);
 b4=i/8;
 prom=i-b4*8;
 i=prom;
 b3=i/4;
 prom=i-b3*4;
 i=prom;
 b2=i/2;
 prom=i-b2*2;
 b1=prom;
 printf("\n%d %d %d %d\n", b4, b3, b2, b1);
}