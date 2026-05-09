#include <stdio.h>

int main()
{
    int szam=0;
    int neg=0;
    int poz=0;
    while (1)
    {

        printf("Adjon meg egy pozitív vagy negatív egész számot: ");
        scanf("%d",&szam);

        if (szam<0)
        {
            neg++;
        }
        else if (szam>0)
        {
            poz++;
        }
        else if (szam==0)
        {
            printf("A pozitív számok száma: %d\n",poz);
            printf("A negatív számok száma: %d\n",neg);
            break;
        }
        
        
    }
    

    return 0;
}