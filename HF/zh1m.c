#include <stdio.h>
#include <stdlib.h>

#define N 1000

int randint(int lo, int hi)
{
    int veletlen = rand();
    int intervallum = hi - lo + 1;

    veletlen = veletlen % intervallum;
    veletlen = lo + veletlen;

    return veletlen;
}

// int get_random_number()
// {
    // return randint(125, 849);
// }

void feltolt(const int n, int tomb[])
{
    for (int i = 0; i < n; ++i)
    {
        // tomb[i] = get_random_number();
        tomb[i] = randint(125, 849);
    }
}

int get_sum(const int n, const int tomb[])
{
    int total = 0;

    for (int i = 0; i < n; ++i)
    {
        total += tomb[i];
    }

    return total;
}

double get_atlag(const int n, const int tomb[])
{
    return (double)get_sum(n, tomb) / (double)n;
}

int main()
{
    srand(2021);
    //
    int szamok[N];      // tartalma: memóriaszemét

    feltolt(N, szamok);

    double atlag = get_atlag(N, szamok);

    printf("átlag: %.2lf\n", atlag);

    int felette = 0;

    for (int i = 0; i < N; ++i)
    {
        if (szamok[i] > atlag) {
            ++felette;
        }
    }

    printf("átlag feletti értékek száma: %d\n", felette);

    return 0;
}