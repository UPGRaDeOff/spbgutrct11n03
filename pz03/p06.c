#include <stdio.h>
int main()
{
int i,u,r;
for (i=0;i<=9;i++)
{
for (u=0;u<=i;u++) {r=u+i*10; printf("%d ",r);}
printf("\n");
}
}