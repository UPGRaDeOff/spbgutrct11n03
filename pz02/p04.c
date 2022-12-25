#include <stdio.h>
#include <math.h>
#define _USE_MATH_DEFINES
main()
{
 float r,h,v;
 printf("\n\nВведите исходные данные:");
 printf("\n\nРадиус основания (см):");
 scanf("%f",&r);
 printf("\n\nВысота цилиндра (см):");
 scanf("%f",&h);
 v=M_PI*r*r*h;
 printf("\n\nОбъем цилиндра: %f см. куб.", v);
 printf("\n\n");
}