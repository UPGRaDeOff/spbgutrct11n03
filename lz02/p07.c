#include <stdio.h>
int main()
{
int a,b,c;
scanf("%d %d %d",&a,&b,&c);
if ((a>b) && (a>c)) if (a*a<b*b+c*c) printf("Остроугольный"); else printf("Неостроугольный");
if ((b>a) && (b>c)) if (b*b<a*a+c*c) printf("Остроугольный"); else printf("Неостроугольный");
if ((c>b) && (c>a)) if (c*c<b*b+a*a) printf("Остроугольный"); else printf("Неостроугольный");
printf("\n");
}