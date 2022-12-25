#include <stdio.h>
#include <stdlib.h>
int main()
{
int massiv[10][3],num,c,cs,choice;
chooser:
printf("Задача 3 Веселов Егор Алексеевич РЦТ-11\n");
printf("Выберите ввод исходных данных:\n");
printf("0) Выход\n");
printf("1) В теле программы\n");
printf("2) С экрана\n");
printf("3) Из файла\n");
printf("4) Сгенерированные\n");
scanf("%d",&choice);
if (choice>4) {printf("Некорректный ввод"); goto chooser;}
else switch(choice)
{
case 0: return 0;
case 1: goto hardcoded;
case 2: goto manual;
case 3: goto reader;
case 4: goto generated;
}
hardcoded:
num=5;
for(cs=0;cs<=2;cs++)
for(c=0;c<num;c++)
massiv[c][cs]=c+1;
goto outputer;
manual:
scanf("%d",&num);
for(cs=0;cs<=2;cs++)
for(c=0;c<num;c++)
scanf("%d",&massiv[c][cs]);
goto outputer;
reader:
generated:
num=rand()%10+1;
for(cs=0;cs<=2;cs++)
for(c=0;c<num;c++)
massiv[c][cs]=rand()%10;
goto outputer;
outputer:
printf("Число переменных:%d\n",num);
printf("Массив A:\n");
for (c=0;c<num;c++)
printf("%d ",massiv[c][0]);
printf("\n");
printf("Массив B:\n");
for (c=0;c<num;c++)
printf("%d ",massiv[c][1]);
printf("\n");
printf("Массив C:\n");
for (c=0;c<num;c++)
printf("%d ",massiv[c][2]);
printf("\n");
prchet(massiv,num);
printf("\n");
sumuz(massiv,num);
printf("\n");
posl(massiv,num);
goto chooser;
}