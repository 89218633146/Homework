#include <iostream>
#include<stdlib.h>
using namespace std;
//граница ряда
const int N = 100;
int main()
{
 //аргументы функции и рабочие переменные
    int x;
    double q;
    double s=  0;
    //индексная переменная
    int n;
    printf("Enter x =");
    scanf("%f", &x);
    q = x;
    //вычисление функции
    for (n = 1; n <= N; n++){
        s += q;
    q *= (2 * n) / (2 ^ n) * n * x ^ (2 * n - 1)/(2 ^ n) * n * (2 * n + 1);}
    printf("f(x)=%f", s);
    return 0;
}

