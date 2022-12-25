#include <stdio.h>
int main()
{
float i;
scanf("\n%f",&i);
if ((i > -5.1) && (i < 3.6))
printf("\nЧисло %f в интервале\n",i);
else printf("\nЧисло %f не пренадлежит интервалу\n",i);
}