#include <iostream>
#include<stdio.h>
#include<malloc.h>
#include <cstdlib>


int main()
{
    srand(2222);
    int const n = 10;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        array[i] = rand() % 100;
        printf("%i ", array[i]);
    }
    int max = array[0];
    int min = array[n - 1];
    int imax = 0;
    int imin = 0;
    for (int i = 0; i < n; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
            imax = i;
        }
    }
    for (int i = n - 1; i > -1; i--)
    {
        if (array[i] < min)
        {
            min = array[i];
            imin = i;
        }
    }
    if (imax > imin)
    {
        for (int i = imin + 1; i < imax; i++)
        {
            if (array[i - 1] != 0, array[i] % 2 == 0)
            {
                array[i] = array[i] * -1;
            }
        }
    }
    else
    {
        for (int i = imax + 1; i < imin; i++)
        {
            if (array[i - 1] != 0, array[i] % 2 == 0)
            {
                array[i] = array[i] * -1;
            }
        }
    }
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("%i ", array[i]);
    }
}