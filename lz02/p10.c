#include <stdio.h>
int main()
{
float m,h,i;
scanf("%f %f",&m,&h);
i=m/(h*h);
if (i<18.5) printf("\nДефицит массы тела\n");
if ((i>18.5) && (i<24.9)) printf("\nНормальная масса тела\n");
if (i>24.9) printf("\nИзбыточная масса тела\n");
}