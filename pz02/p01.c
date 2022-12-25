#include <stdio.h>
main()
{
 int a;
 int b=2,c,d;
 const x=10;
 printf("\n\nВведите a,c\n");
 scanf("%d%d",&a,&c);
 printf("Исходные данные: a=%d b=%d c=%d\n\n",a,b,c);
 d=a*b+x/(2*c);
 printf("Результат: d=%d\n", d);
 getchar();
}