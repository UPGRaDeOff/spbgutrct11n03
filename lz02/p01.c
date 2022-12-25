#include <stdio.h>
int numtotext(int x,int y,int z) //Функция для вывода числа в виде текста (для рублей)
{
switch(x) //Вывод сотен
{
case 0: printf(""); break;
case 1: printf(" сто"); break;
case 2: printf(" двести"); break;
case 3: printf(" триста"); break;
case 4: printf(" четыреста"); break;
case 5: printf(" пятьсот"); break;
case 6: printf(" шестьсот"); break;
case 7: printf(" семьсот"); break;
case 8: printf(" восемьсот"); break;
case 9: printf(" девятьсот"); break;
}
switch (y) //Вывод десятков (или десятков и единиц в случае чисел от 10 до 19)
{
case 0: printf(""); break;
case 1: switch(z)
        {
        case 0: printf(" десять"); break;
        case 1: printf(" одиннадцать"); break;
        case 2: printf(" двенадцать"); break;
        case 3: printf(" тринадцать"); break;
        case 4: printf(" четырнадцать"); break;
        case 5: printf(" пятнадцать"); break;
        case 6: printf(" шестнадцать"); break;
        case 7: printf(" семнадцать"); break;
        case 8: printf(" восемнадцать"); break;
        case 9: printf(" девятнадцать"); break;
        }
        break;
case 2: printf(" двадцать"); break;
case 3: printf(" тридцать"); break;
case 4: printf(" сорок"); break;
case 5: printf(" пятьдесят"); break;
case 6: printf(" шестьдесят"); break;
case 7: printf(" семьдесят"); break;
case 8: printf(" восемьдесят"); break;
case 9: printf(" девяносто"); break;
}
if (y!=1) switch (z) //Вывод единиц (в случае, если они ещё не были выведены)
{
case 0: printf(""); break;
case 1: printf(" один"); break;
case 2: printf(" два"); break;
case 3: printf(" три"); break;
case 4: printf(" четыре"); break;
case 5: printf(" пять"); break;
case 6: printf(" шесть"); break;
case 7: printf(" семь"); break;
case 8: printf(" восемь"); break;
case 9: printf(" девять"); break;
}
}
int numtotextc(int x,int y,int z) //Функция для вывода числа в виде текста (для копеек)
{
switch (y) //Вывод десятков (или десятков и единиц в случае чисел от 10 до 19)
{
case 0: printf(""); break;
case 1: switch(z)
        {
        case 0: printf(" десять"); break;
        case 1: printf(" одиннадцать"); break;
        case 2: printf(" двенадцать"); break;
        case 3: printf(" тринадцать"); break;
        case 4: printf(" четырнадцать"); break;
        case 5: printf(" пятнадцать"); break;
        case 6: printf(" шестнадцать"); break;
        case 7: printf(" семнадцать"); break;
        case 8: printf(" восемнадцать"); break;
        case 9: printf(" девятнадцать"); break;
        }
        break;
case 2: printf(" двадцать"); break;
case 3: printf(" тридцать"); break;
case 4: printf(" сорок"); break;
case 5: printf(" пятьдесят"); break;
case 6: printf(" шестьдесят"); break;
case 7: printf(" семьдесят"); break;
case 8: printf(" восемьдесят"); break;
case 9: printf(" девяносто"); break;
}
if (y!=1) switch (z) //Вывод единиц (в случае, если они ещё не были выведены)
{
case 0: printf(""); break;
case 1: printf(" одна"); break;
case 2: printf(" две"); break;
case 3: printf(" три"); break;
case 4: printf(" четыре"); break;
case 5: printf(" пять"); break;
case 6: printf(" шесть"); break;
case 7: printf(" семь"); break;
case 8: printf(" восемь"); break;
case 9: printf(" девять"); break;
}
}
int main() //Основное тело программы
{
double i,ia; //Вводное число
int iint,ihm=0,itm=0,iom,iht,itt,ito,ih,it,io,iu=0,idt,idh; //Переменные для цифр
printf("Введите число:"); //Запрос
scanf("%lf",&i); //Чтение
iint=(int)i; //Отброс дробной части числа и преобразование её в целую часть
iom=iint/1000000; //Разделение целой части числа на цифры
iht=iint%1000000/100000;
itt=iint%100000/10000;
ito=iint%10000/1000;
ih=iint%1000/100;
it=iint%100/10;
io=iint%10;
ia=i+0.001;
idt=(int)((ia-iint)*100)/10;
idh=(int)((ia-iint)*100)%10;
//printf("Тестовое число:%d\n", iint); //Вывод тестового числа
//printf("Тестовая строка:%d %d %d %d %d %d %d %d %d\n",iom,iht,itt,ito,ih,it,io,idt,idh); //Вывод цифр
numtotext(ihm,itm,iom); //Вызов функции для миллионов
if (ihm+itm+iom==0) printf(""); //Проверка на наличие миллионов
if ((ihm!=0) && (itm==0) && (iom==0)) printf(" миллионов"); //Проверка на числа 100, 200, 300...
if ((itm!=0) && (iom==0)) printf(" миллионов"); //Проверка на числа X20, X30, X40...
if (itm==1) printf(" миллионов");//Проверка на числа X10, X11, X12... X19
if ((itm!=1) && (iom==1)) printf(" миллион"); //Проверка на числа XY1 (Y!=1)
if ((itm!=1) && (iom>=2) && (io<=4)) printf(" миллиона"); //Проверка на числа XY2, XY3, XY4 (Y!=1)
if ((itm!=1) && (iom>=5)) printf(" миллионов"); //Проверка на числа XY5, XY6... (Y!=1)
numtotext(iht,itt,ito); //Вызов функции для тысяч
if (iht+itt+ito==0) printf(""); //Проверка на наличие тысяч
if ((iht!=0) && (itt==0) && (io==0)) printf(" тысяч"); //Проверка на числа 100, 200, 300...
if ((itt!=0) && (ito==0)) printf(" тысяч"); //Проверка на числа X20, X30, X40...
if (itt==1) printf(" тысяч");//Проверка на числа X10, X11, X12... X19
if ((itt!=1) && (ito==1)) printf(" тысяча"); //Проверка на числа XY1 (Y!=1)
if ((itt!=1) && (ito>=2) && (ito<=4)) printf(" тысячи"); //Проверка на числа XY2, XY3, XY4 (Y!=1)
if ((itt!=1) && (ito>=5)) printf(" тысяч"); //Проверка на числа XY5, XY6... (Y!=1)
numtotext(ih,it,io); //Вызов функции для единиц
if ((ih+it+io==0) && (ihm+itm+iom+iht+itt+ito+ih+it+io!=0)) printf(" рублей"); //Проверка на наличие единиц
if ((ih!=0) && (it==0) && (io==0)) printf(" рублей"); //Проверка на числа 100, 200, 300...
if ((it!=0) && (io==0)) printf(" рублей"); //Проверка на числа X20, X30, X40...
if (it==1) printf(" рублей");//Проверка на числа X10, X11, X12... X19
if ((it!=1) && (io==1)) printf(" рубль"); //Проверка на числа XY1 (Y!=1)
if ((it!=1) && (io>=2) && (io<=4)) printf(" рубля"); //Проверка на числа XY2, XY3, XY4 (Y!=1)
if ((it!=1) && (io>=5)) printf(" рублей"); //Проверка на числа XY5, XY6... (Y!=1)
numtotextc(iu,idt,idh);
if ((idt!=0) && (idh==0)) printf(" копеек"); //Проверка на числа X20, X30, X40...
if (idt==1) printf(" копеек");//Проверка на числа X10, X11, X12... X19
if ((idt!=1) && (idh==1)) printf(" копейка"); //Проверка на числа XY1 (Y!=1)
if ((idt!=1) && (idh>=2) && (idh<=4)) printf(" копейки"); //Проверка на числа XY2, XY3, XY4 (Y!=1)
if ((idt!=1) && (idh>=5)) printf(" копеек"); //Проверка на числа XY5, XY6... (Y!=1)
printf("\n");
}