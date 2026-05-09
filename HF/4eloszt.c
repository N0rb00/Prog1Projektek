#include <stdio.h>


int main()
{
    int max = 0;
    printf("Adjon meg egy felső határértéket: ");
    scanf("%d",&max);

    for (int i = 1; i <= max; i++)
    {
        if (i%4==0)
        {
            printf("%d\n",i);
        }
        
    }
    
    return 0;
}