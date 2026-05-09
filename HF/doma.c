#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int n;
    printf("Hány számot szeretne megadni? ");
    if (scanf("%d", &n) != 1 || n <= 0)
    { 
        printf("Hibás bemenet! Kérem, adjon meg egy pozitív egész számot.\n");
        exit(0);
    }

    int tomb[n];
    printf("Adja meg a számokat:\n");
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &tomb[i]) != 1) {
            printf("Hibás bemenet! Kérem, adjon meg egy egész számot.\n");
            exit(1);    
        }
    }

    int osszeg = 0;
    for (int i = 0; i < n; i++) {
        osszeg += tomb[i];
    }
    double atlag = (double)osszeg / n;
    printf("A számok átlaga: %.2f\n", atlag);
    return 0;





    //////////// *
    //////////// *
    //////////// *


    srand(2026);
    int randomszam = rand() % 10; 

    //////////// *
    //////////// *
    //////////// *



#include <stdio.h>
#include <stdlib.h>

#define N 10

//( 1804289383 % (1000 - 100 + 1) ) + 100
int main() {
    int tomb[N];
    
    int upper_bound = 1000;
    int lower_bound = 100;
    for (int i = 0; i < N; i++) {
        int value = rand() % (upper_bound - lower_bound + 1) + lower_bound;
        tomb[i] = value;
    }
    return 0;
}


    //////////// *
    //////////// *
    //////////// *

    
#include <stdio.h>
#include <stdlib.h>

#define N 10

int main() {
    int tomb[N];
    srand(2026);
    for (int i = 0; i < N; i++) {
        int value = rand() % 10; // 0-9 közötti véletlenszám
        tomb[i] = value;
    }

    printf("A tömb összeolvasztva: ");
    if (tomb[0] == 0) {
        printf("Az első karakter 0.");
    }

    }
    for (int i = 0; i < N; i++) {

        printf("%d", tomb[i]);
    }
    // ! ez nem fut le! -> printf("%d", value[5]);

    // rakjunk új sort a végére
    puts("");

    return 0;
}



// két sztring összeolvasztása egy új stringbe abc + def -> adbecf vagy 1234 + 5678 -> 15263748, ezeket argc és argv-vel kérjük be, csekkoljuk hogy ugyanakkora a két string, ha nem akkor írjunk hibaüzenetet és lépjünk ki, ha igen akkor olvassuk be a két stringet és olvassuk össze őket egy új stringbe úgy hogy váltogatva rakjuk bele a karaktereket, majd írjuk ki az eredményt

#include <stdio.h>
#include <string.h>
#include "prog1.h"

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Nem megfelelő számú argumentum\n");
        return 1;
    }

    string str1 = argv[1];
    string str2 = argv[2];

    int len1 = sizeof(str1) - 1; // null / lezáró terminátor nélkül 
    int len2 = strlen(str2);
    if (len1 != len2) {
        printf("A két string hossza nem egyezik\n");
        return 1;
    }

    int len = len1; // vagy len2, mert ugyanakkora

    string result = malloc(len*2 + 1); // +1 a null terminátorhoz
    
    int index = 0;
    for (int i = 0; i < len; i++) {
        result[index++] = str1[i];
        result[index++] = str2[i];
    }
    result[index] = '\0'; // null terminátor
    printf("Az összeolvasztott string: %s\n", result);

    return 0;
}
