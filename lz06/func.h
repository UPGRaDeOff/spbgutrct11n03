#include <iostream>
const int N=5;
class Func
{
private:
int massiv[N];
int prchet=1,sum=0,zero=0,zeroam=0;
public:
void input_massiv(int class_massiv[N]) {for(int i=0;i<N;i++) massiv[i]=class_massiv[i];}
int output_prozchet() {for(int i=0;i<N;i++) {if ((i+1)%2==0) prchet=prchet*massiv[i];} return prchet;}
int output_sumzero() {for(int i=0;i<N;i++) if (massiv[i]==0) zeroam++;
for(int i=0;i<N;i++) {if (massiv[i]==0) zero++; if ((zero>0) && (zero<zeroam)) sum=sum+massiv[i];} return sum;}
};