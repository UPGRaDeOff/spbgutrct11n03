#include <stdio.h>
int function(int i)
{
int c,d=0;
c=i;
for (c;c>0;c=c-1)
{
if (i%c==0) d=d+1;
}
if (d>2) return 0;
else return 1;
}
int main()
{
int v,r=0;
scanf("%d",&v);
r=function(v);
printf("%d",r);
}