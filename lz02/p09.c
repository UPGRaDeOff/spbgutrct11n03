#include <stdio.h>
#include <math.h>
int main()
{
int a,b,c;
float S,p;
scanf("\n%d%d%d",&a,&b,&c);
if ((a+b!=c) && (a+c!=b) && (b+c!=a))
{
p=(a+b+c)/2;
S=sqrt(p*(p-a)*(p-b)*(p-c));
printf("\nПлощадь треугольника: %f\n",S);
}
else printf("\nНе существует\n");
}