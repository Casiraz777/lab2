#include <iostream>
#include <string>

int main()
{
    int const n = 5;

    srand(2221);

    int array[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int f = 0; f < n; f++)
        {
            array[i][f] = rand() % 10;
            printf("%i ", array[i][f]);
        }
        printf("\n");
    }
    int res[n * 2];
    int ires = 0;
    for (int i = 0; i < n; i++)
    {
        res[i] = 1;
        for (int f = 0; f <= i; f++)
        {
            res[i] = res[i] * array[i - f][f];
            ires++;
        }
    }
    int b;
    int a = 1;
    for (int i = n - 1; i > 0; i--)
    {
        b = 0;
        a++;
        res[n * 2 - a] = 1;
        for (int f = n - 1; f >= i; f--)
        {
            res[n * 2 - a] = res[n * 2 - a] * array[i + b][f];
            b++;
        }
    }
    printf("\n Result: ");
    for (int i = 0; i < n * 2 - 1; i++)
    {
        printf("%i ", res[i]);
    }
}