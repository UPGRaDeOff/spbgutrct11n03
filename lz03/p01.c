#include <stdio.h>
int f1(int i) //while
{
int c=0,sum=0;
while (c!=i)
{
c++;
sum=c+sum;
}
return sum;
}
int f2(int i) //do while
{
int c=0,sum=0;
do
{
c++;
sum=c+sum;
} while (c!=i);
return sum;
}
int f3(int i) //for
{
int c=1,sum=0;
for(c;c<=i;c++)
{
sum=c+sum;
}
return sum;
}
int f4(int i) //if goto
{
int c=0,sum=0;
repeat:
if (c<i) {c++; sum=c+sum; goto repeat;}
return sum;
}
int f5(int i) //рекурсия
{
int c=0,sum=0,ret;
c=i;
sum=sum+c;
if (c!=0) {c=c-1; ret=f5(c);}
sum=sum+ret;
return sum;
}
int main()
{
int choice,n,r;
printf("Выберите способ организации циклических выражений:\n");
printf("1 - while\n");
printf("2 - do... while\n");
printf("3 - for...\n");
printf("4 - if (выражение) goto\n");
printf("5 - Рекурсия\n");
printf("0 - Выход\n");
menu:
scanf("%d",&choice);
if (choice>5) {printf("Неверно\n"); goto menu;}
else switch(choice)
{
case 0: printf("Выходим..."); break;
case 1: printf("Введите исходную переменную:"); scanf("%d",&n); r=f1(n); printf("%d",r); break;
case 2: printf("Введите исходную переменную:"); scanf("%d",&n); r=f2(n); printf("%d",r); break;
case 3: printf("Введите исходную переменную:"); scanf("%d",&n); r=f3(n); printf("%d",r); break;
case 4: printf("Введите исходную переменную:"); scanf("%d",&n); r=f4(n); printf("%d",r); break;
case 5: printf("Введите исходную переменную:"); scanf("%d",&n); r=f5(n); printf("%d",r); break;
}
printf("\n");
}