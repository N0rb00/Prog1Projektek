#include <stdio.h>

int main()
{
    int paros=0;
    while (1)
    {
        int ertek=0;
        printf("Adjon eg egy egész számot: (kilépés 0) \n");
        scanf("%d",&ertek);
        if (ertek==0)
        {
            printf("A páros számok száma: %d\n",paros);
            break;
        }
        if (ertek%2==0)
        {
            paros++;
        }
        
    }
    


    return 0;
}