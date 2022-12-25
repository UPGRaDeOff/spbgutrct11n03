#include <stdio.h>
int main()
{
int a,b,c;
scanf("\n%d%d%d",&a,&b,&c);
if ((a+b!=c) && (a+c!=b) && (b+c!=a)) printf("\nСуществует\n");
else printf("\nНе существует\n");
}