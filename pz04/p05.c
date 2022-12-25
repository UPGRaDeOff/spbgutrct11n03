#include <stdio.h>
#include <string.h>
float percent(char STR[80], char sim)
{
int i,count=0;
for (i=0;i<strlen(STR);i++)
if (STR[i]==sim) count++;
return ((float)count/strlen(STR))*100.00;
}
int main()
{
char str[80],symbol;
int count=0;
gets(str);
scanf("%c",&symbol);
printf("%3.2f%%",percent(str,symbol));
}