#include <stdio.h>
int prchet(int m[10][3],int n)
{
        int i,pr=1;
        for(i=0;i<=n-1;i++)
        {
        if ((i+1)%2==0) pr=pr*m[i][0];
        }
        printf("%d",pr);
}
int sumuz(int m[10][3], int n)
{
        int i,sum=0,trig=0;
        for(i=0;i<=n-1;i++)
        {
        if (m[i][0]==0) trig=1;
        if (trig!=1) sum=sum+m[i][0];
        }
        printf("%d",sum);
}
int posl(int m[10][3], int n)
{
        int i,x[10],y[10];
        for(i=0,i<n;i++;)
        {
        if (m[i][0]<=m[i][1]) x[i]=m[i][0]/2;
        else x[i]=m[i][1]/2;
        if (m[i][1]<=m[i][2]) y[i]=m[i][1]/2;
        else y[i]=m[i][2]/2;
        }
        for(i=0,i<n;i++;)
        printf("%d ",x[i]);
        for(i=0,i<n;i++;)
        printf("%d ",y[i]);
}