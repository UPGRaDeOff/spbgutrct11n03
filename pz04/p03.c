#include <stdio.h>
#include <math.h>
int issqr(float i)
{
if (sqrt(i)-(int)sqrt(i)==0) return 1;
else return 0;
}
int main()
{
float v,r;
scanf("%f",&v);
r=issqr(v);
printf("%f",r);
}