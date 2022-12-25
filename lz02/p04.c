#include <stdio.h>
int main()
{
int a,b,c;
scanf("\n%d%d%d",&a,&b,&c);
if ((a<b) && (b<c)) printf("\nВыполняется\n");
else printf("\nНе выполняется\n");
}