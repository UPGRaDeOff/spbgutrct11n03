#include <stdio.h>
int sum(int i)
{
int s=0,c;
c=i;
while (c!=0)
{
s=s+(c%10);
c=c/10;
}
return s;
}
int main()
{
int v;
scanf("%d",&v);
printf("%d",sum(v));
}