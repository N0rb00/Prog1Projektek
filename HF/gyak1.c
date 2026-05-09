#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//Generálj le 10 db random számot egy tömbbe, és válaszd ki a 7. elemét és azt írd ki 3x

#define N 10
int main(){
    int tomb[N];
    srand(time(NULL));
    for (int i = 0; i < N; i++ ){
        int value = rand() % 10;
        tomb[i] = value;
        //printf("%d \n", tomb[i]);

    }
    for (int i = 0; i < 3; i++)
    {
    printf("%d\n",tomb[7]);
    }
    
    return 0;
}