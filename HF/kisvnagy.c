#include <stdio.h>

int main()
{
    int a = 0;
    int b = 0;

    printf("Adjon meg egy A értéket: ");
    scanf("%d",&a);
    printf("Adjon meg egy B értéket: ");
    scanf("%d",&b);
    if (a<b)
    {
        printf("<\n");
    }
    else if (a>b)
    {
        printf(">\n");
    }
    else if (a==b)
    {
        printf("=\n");
    }
    
    
    


    return 0;
}