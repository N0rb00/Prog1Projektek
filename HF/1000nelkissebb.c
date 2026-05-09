#include <stdio.h>

int main()
{
    int sum = 0;
    for (int i = 0; i < 1000; i++)
    {
        if (i%3==0)
        {
            sum=i+sum;
        }
        else if (i%5==0)
        {
            sum=i+sum;
        }   
        
    }
    printf("Az összeg: %d\n",sum);

    return 0;
}