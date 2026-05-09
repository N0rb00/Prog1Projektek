#include <stdio.h>
#include "prog1.h"
#include <string.h>
#include <ctype.h>

#define BUFSIZE 512

int main()
{
    int kisbetuk = 0;
    int nagybetuk = 0;
    int szokozok = 0;
    int szamjegyek = 0;
    char text[BUFSIZE];
    while (1)
    {
        printf("Szöveg (vége: *): ");
        fgets(text, sizeof(text), stdin);
        text[strlen(text) - 1 ] = '\0';
        //printf("%s\n",text);
        int hossz = strlen(text);
        for (int i = 0; i< hossz; ++i)
        {
            char c = text[i];
            if (islower(c)){
                ++kisbetuk
            }
            else if (isupper(c)){
                ++nagybetuk
            }
            else if (c == " "){
                +szokozok
            }
            else if (isdigit(c)){
                ++szamjegyek
            }
        }
        printf("Kisbetuk szama: %");
    
    }

    return 0;
}