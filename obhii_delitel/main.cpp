//минимальный делитель трёх натуральных чисел
#include<stdio.h>

int main()

{
 int a;
 int i=0;
 int b;
 int j=0;
 int c;
 int k=0;
 int min;
 printf("a = ");
 scanf("%d", &a);
 printf("b =");
 scanf("%d", &b);
 printf("c =");
 scanf("%d", &c);

 for(i=2; i<=a; i++)
   if (a%i==0)

 for(j=2; j<=b; j++)
    if(b%j==0)

 for(k=2; k<=c; k++)
     if(c%k==0)

 if(i<=j && i<=k)
     min=i;
 if(j<=i && j<=k)
     min=j;
 if(k<=i && k<=j)
     min=k;

           printf("%d", min);
   return 0;

}


