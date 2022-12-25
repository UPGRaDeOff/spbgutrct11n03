#include <stdio.h>
main()
{
 int i,x,y,z,r;
 printf("\nВведите исходное число:");
 scanf("%d", &i);
 x=i/100;
 y=i%100/10;
 z=i%100%10;
 r=x+y+z;
 printf("\n%d\n",r);
}