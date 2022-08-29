#include<stdio.h>
#include <math.h>

int main()
{
    double x, y;
    scanf("%f",&x);
    printf("y=%f",y=2*cos(x-M_PI/6)+sqrt(2)*exp(3*x)/
            (1/(2*log(x))+(sin(x*x))*(sin(x*x))));

    return 0;
}
