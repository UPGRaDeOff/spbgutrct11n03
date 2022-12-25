#include <stdio.h>
int euclid(int a, int b)
{
int p,v,o;
if (a>b) {p=a; v=b;}
if (b>a) {p=b; v=a;}
if (a==b) return a;
do
{
o=p%v;
p=v;
v=o;
} while (o!=0);
return p;
}
int main()
{
int x,y,r;
scanf("%d%d",&x,&y);
r=euclid(x,y);
printf("%d",r);
}