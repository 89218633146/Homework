//минимальный делитель трёх натуральных чисел
#include<stdio.h>

int main()
{
    int a;
    int b;
    int c;
    int min;
    printf("a =");
    scanf("%d", &a);
    printf("b =");
    scanf("%d", &b);
    printf("c =");
    scanf("%d", &c);
    if(a<=b && a<=c)
        min=a;
    if(min >= b && min >= c)
        for(int i = 2; i<= min; i++)
            if(a%i == 0, b%i == 0, c%i == 0)
            printf("%d", i);



   return 0;

}


