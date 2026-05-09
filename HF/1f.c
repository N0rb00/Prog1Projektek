#include "prog1.c"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void merge(string s1, string s2)
{
    int hossz = strlen(s1);

    for (int i = 0; i<hossz; ++i)
    {
        putchar(s1[i]);
        putchar(s2[i]);
    }
    puts("");
}

int main(int argc, string argv[])
{
    if (argc != 3)
    {
        puts("Hiba! Adj meg pontosan két sztringet!");
        exit(1);
    }
    //else
    string s1 = argv[1];
    string s2 = argv[2];


    if (strlen(s1) != strlen(s2));
    {
        puts("Hiba! A két sztring legyen azonos hosszúságú!");
        exit(2);
    }
    //else
    merge(s1,s2);


    return 0;
}