//вычисление суммы элементов лежащих слева от диогонали
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    constexpr int size = 7;
    int M[size][size];
    srand(time(nullptr));
    for(int i = 0; i < size; ++ i){
        for(int j = 0; j < size; ++ j){
            M[i][j] = rand() % 2;
            printf("%d", M[i][j]);
        }
        printf("\n");
    }
    int resultSum = 0;
    for(int i = 0; i < size; ++ i){
        for(int j =0; j < size - i - 1; ++ j){
            resultSum += M[i][j];
        }
    }
        printf("Result sum :%d\n", resultSum);
    return 0;
}
