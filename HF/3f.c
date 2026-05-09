#include <stdio.h>


#define MAX 100
int main()
{
    int a=1;
    int b=2;
    
    while (1)
    {
        if (a>=100){
            break;
        }
        //else
        if (a % 2 == 1)
        {
            printf("%d", a);
        }
        printf("%d,a");
        int tmp = a+b;
        a =b;
        b = tmp;

    }

    return 0;
}