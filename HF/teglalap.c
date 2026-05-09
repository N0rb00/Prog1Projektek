#include <stdio.h>

int main()
{
    int a = 0;
    int b = 0;

    printf("Adja meg a téglalap egyik oldalának a hosszát: ");
    scanf("%d",&a);
    printf("Adja meg a téglalap másik oldalának a hosszát: ");
    scanf("%d",&b);

    printf("A téglalap területe: %d\n",a*b);
    printf("A téglalap kerülete: %d\n",2*a+2*b);



    return 0;
}