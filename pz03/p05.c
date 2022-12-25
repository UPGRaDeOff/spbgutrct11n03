#include <stdio.h>
int recursion(int i)
{
int c;
c=i;
if (c==100) return(0);
if (c%10!=9) {printf("%d ",c); c++;  recursion(c);}
else {printf("%d\n",c); c++; recursion(c);}
}
int main()
{
int start=0;
recursion(start);
}