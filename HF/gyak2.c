#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//10-15 között 3 random számot, és össze olvasztani

#define N 3

int main(){
    int lowLimit=10;
    int upLimit=15;
    int tomb[N];
    srand(time(NULL));
    for (int i = 0; i < N;i++){
        int value = rand() % (upLimit - lowLimit + 1)+ lowLimit;
        tomb[i]=value;
        printf("%d\n",tomb[i]);
    
    }



    return 0;
}