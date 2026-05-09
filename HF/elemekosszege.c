#include <stdio.h>

int main()
{
    int sum = 0;

    while (1)
    {
        int szam = 0;
        printf("Adjon meg egy számot (kilépés 0): \n");
        scanf("%d",&szam);
        sum+=szam;
        if (szam==0)
        {
            printf("A számok összege: %d\n", sum);
            break;
        }
        
    }
    

    return 0;
}