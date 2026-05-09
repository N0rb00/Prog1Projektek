//Kerjunk be stringet egészen addig amíg egy csillagot nem ad a felhasznalo a vegere

#include <stdio.h>
#include <stdlib.h>
#include "prog1.h"
#include <string.h>


int main()

{
    string szoveg;

    int kisbetuk = 0;
    int nagybetuk = 0;
    int szamjegyek = 0;
    int szokozok = 0;

    while (1)
    {

        szoveg = get_string("Mi legyen a szöveg: ");
        if (strcmp(szoveg, "*")==0)
        {
            break;
        }
        printf("%s\n",szoveg);


        for (int i = 0; i < strlen(szoveg) ; i++)
        {
            char karakter = (char)szoveg[i];
            if (karakter >= 'a'&& karakter <= 'z')
            {
                kisbetuk++;
            }
            else if(karakter >= 'A' && karakter <= 'Z'){
                nagybetuk++;
            }
            else if(karakter>= '0' && karakter <= '9'){
                szamjegyek++;
            }
            else if(karakter == ' '){
                szokozok++;
            }
        }
        
        
        
    }
    printf("A kisbetűk száma: %d\n",kisbetuk);
    printf("A nagybetűk száma: %d\n",nagybetuk);
    printf("A szamjegyek száma: %d\n",szamjegyek);
    printf("A szokozok száma: %d\n",szokozok);
    

    

    return 0;
}