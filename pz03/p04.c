#include <stdio.h>
int main()
{
int i,sum=0,c=0;
scanf("%d",&i);
loopsum:
c++;
sum=sum+c;
if (c!=i) goto loopsum;
printf("%d\n",sum);
}