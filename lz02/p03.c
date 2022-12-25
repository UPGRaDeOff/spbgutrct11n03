#include <stdio.h>
int main()
{
float a,b,c;
printf("\nВведите рост\n");
scanf("\n%f%f%f",&a,&b,&c);
if ((a==b) && (b==c)) printf("\nРост одинаков\n");
else printf("\nРост не одинаков\n");
}