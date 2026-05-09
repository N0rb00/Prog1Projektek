#include <stdio.h>
#include <stdlib.h>



#define N 1000

int randint(int lo,int hi) // Lapra ki kell írni benne lesz a ZH-ban
{
    int veletlen = rand();
    int intervallum = hi - lo + 1;

    veletlen = veletlen % intervallum;
    veletlen = lo + veletlen;

    return veletlen;

}

int get_random_number()
{
    return randint(125,849);
}
void feltolt(const int n, int tomb[])
{
    for (int i = 0; i<n; ++i){
        tomb[i] = randint(125,849);
    }
}

int get_sum(const int n, const int tomb[])
{
    int total = 0;
    for (int i = 0; i < n;++i){
        total += tomb[i];
    }
}

double get_atlag(const int n, const int tomb[])
{
    return (double)get_sum(n,tomb) / (double)n;
}

int main()
{
    srand(2021);//ennek itt a helye
    //
    int szamok[N]; //tartalma memoriaszemet
    feltolt(N,szamok);
    double atlag = get_atlag(N, szamok);
    printf("Atlag:%.2lf\n ",atlag);
    int felette = 0;
    for (int i = 0; i < N; ++i )
    {
        if (szamok[i] > atlag) {
            ++felette
        }
    }
    return 0;

    printf("Átlag feletti értékek száma: %d\n", felette);
}