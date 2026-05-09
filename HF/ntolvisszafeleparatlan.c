#include <stdio.h>

int main()
{
    int max = 0;
    printf("Adjon meg egy Felső értéket: ");
    scanf("%d",&max);

    for (max; max > 0; max--)
    {
        if (max%2==1)
        {
            printf("%d\n",max);
        }
        
    }
    
    return 0;
}