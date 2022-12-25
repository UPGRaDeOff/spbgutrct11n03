#include <stdio.h>
int main()
{
int x,y,r;
scanf("%d %d %d",&x,&y,&r);
if ((2*r<=x) && (2*r<=y)) printf("Пройдёт"); else printf("Не пройдёт");
printf("\n");
}