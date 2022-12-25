#include <stdio.h>
int main()
{
int a,b,c;
scanf("\n%d%d%d",&a,&b,&c);
if ((a==b) || (a==c) || (b==c)) printf("\Равнобедренный\n");
else printf("\nНеравнобедренный\n");
}