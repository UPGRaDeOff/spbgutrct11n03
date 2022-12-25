#include <iostream>
#include "func.h"
using namespace std;
int main()
{
int m[N];
Func func;
for(int i=0;i<N;i++) cin >> m[i];
func.input_massiv(m);
cout << "Произведение чётных элементов: " << func.output_prozchet() <<  " Сумма цифр между первым и последним нулевым элементом: " << func.output_sumzero();
}