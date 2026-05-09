#include <stdio.h>
//Fibonacci sorozat létrehozása 1000-ig

#define N 20
int main()
{
    int a = 1;
    int b = 2;
    int tmp = 0;

    int i = 0;
    int szamok[N];

    while (b<1000)
    {
        szamok[i++] = b;
        tmp = a+b;
        a = b;
        b = tmp;
    }
    for (int i = 0; i < N; i++)
    {
        printf("%d\n",szamok[i]);
    }
    
    
    
    return 0;
}