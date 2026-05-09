#include <stdio.h>

int main()

{

    int szam;
    do{
        printf("Pozitív egész szám: ");
        scanf("%d",&szam);

    } while (szam>0);


    printf("A szám nem felel meg a feltételnek :( %d)\n",szam);

    return 0;
}