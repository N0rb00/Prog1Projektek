#include <stdio.h>

int main()

{
    int szam=1;
    while(szam>=1){
        printf("Adjon meg egy pozitív egész számot: ");
        scanf("%d",&szam);

    }
    printf("A szám nem pozitív :( )");

    return 0;
}