#include <stdio.h>
const int r=3;
int main()
{
struct train{int num, time, price; char station[20];} t[r];
int i,k,m,e[r],c=0;
for(i=0;i<r;i++){
        printf("Введите номер поезда:");
        scanf("%d", &t[i].num);
        printf("Введите станцию назначения:");
        scanf("%s",&t[i].station);
        printf("Введите время в пути:");
        scanf("%d",&t[i].time);
        printf("Введите цену билета:");
        scanf("%d",&t[i].price);}
printf("Введите k:");
scanf("%d",&k);
printf("Введите m:");
scanf("%d",&m);
for(i=0;i<r;i++) e[i]=0;
for(i=0;i<r;i++){
        if (k<=t[i].time) if (t[i].price<=m) e[i]=1;}
for(i=0;i<r;i++){
        if (e[i]==1) {
        printf("Номер поезда: %d\n",t[i].num);
        printf("Станция назначения: %s\n", t[i].station);
        printf("Время в пути: %d\n",t[i].time);
        printf("Цена билета: %d\n",t[i].price);
        c=1;}}
if (c==0) printf("Поездов с введёнными параметрами не найдено");
}