//Keressuk meg egy adott szringben hogy van-e adott karakter.

#include <stdio.h>
#include "prog1.h"

int is_contain(char *szoveg, char karakter)
{
    for (int i = 0; szoveg[i] != '\0'; i++)
    {
        if (karakter == szoveg[i])
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    
    char *s = "Szo";
    char c = 'z';
    int found = is_contain(s,c);
    if(found==1)
    {
        printf("Van ilyen karakter \n");
    }
    else
    {
        printf("hfthtdhtdh");
    }
    
    return 0;
}