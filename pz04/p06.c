#include <stdio.h>
int main()
{
int i=0,m[5][2];
for (i;i<=4;i++)
scanf("%d",&m[i][1]);
i=0;
for (i;i<=4;i++)
m[i][2]=m[i][1]*2;
i=0;
for (i;i<=4;i++) 
printf("%d ",m[i][2]);
}