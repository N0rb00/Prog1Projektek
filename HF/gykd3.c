//Argumentumokban beker szamot és azokat atlagolja

#include <stdio.h>
#include <stdlib.h>


int main(int argc,char* argv[])
{
    
    int szumma = 0;
    int db=argc;
    double atlag = 0;
    if (db<2)
    {
        printf("Nem elég argumentum. \n");
        exit(0);
    }

    for (int i = 1; i < db; i++)
    {
        szumma+=atoi(argv[i]);
    }
    atlag = (double)szumma/(db-1);
    printf("Az átlag: %.2f\n",atlag);

    return 0;    
}