#include <iostream>
#include<stdio.h>
#include<malloc.h>
#include <cstdlib>




int main()
{
    int const n = 5;

    srand(2222);

    int array[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int f = 0; f < n; f++)
        {
            array[i][f] = rand() % 10;
        }
    }
    int res[2] = { 1,1 };

    for (int i = 0; i < n; i++)
    {
        res[0] = res[0] * array[i][i];

    }
    for (int i = 0; i < n; i++)
    {
        res[1] = res[1] * array[i][n - i];

    }
    printf("\n Result: %i,%i ",res[0],res[1]);
}