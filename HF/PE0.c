#include <stdio.h>

int main(){
    int szam;
    printf("Adjon meg egy számot: ");
    scanf("%d", &szam);
    
    if (szam<0){
        printf("Negatív\n");
    }
    else if (szam>0){
        printf("Pozitív\n");
    }
    else{
        printf("Nulla\n");
    }
    return 0;
}