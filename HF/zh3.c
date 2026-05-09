#include <stdio.h>

int main()
{
    int ertek = 1;
    double veg = 1.0;
    while(1)
    {
        printf("Adjon meg értéket: \n");
        scanf("%d",&ertek);
        if (ertek==0) break;
        if (ertek%2==0)
        {
            veg=ertek*veg;
        }
        else if(ertek%2==1) veg=veg/ertek;
        
    }
    printf("%f\n",veg);
    return 0;
}