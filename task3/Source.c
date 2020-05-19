#include<stdio.h>
#include<malloc.h>
#define C 1000

int main()
{
    int L = 0, n, num, b = 0;
 
    int m[C];

    printf("n =  ");
    scanf("%i", &n);

    for (int i = 0; i < n; i++)
    {
        printf("enter number: ");
        scanf("%i", &num);
        if (num % 2 == 0)
        {
            b++;
            if (b == 2)
            {
                m[i] = 1;
                b = 0;
                i++;
                n++;
            }
        }
        m[i] = num;
    }
    b = 0;
    for (int i = n - 1; L >= 0; i--)
    {
        if (m[i] < 0)
        {
            L = m[i];
        }
    }
    printf("l = %i ", L);


    for (int i = 0; i < n; i++)
    {
        
        
            if (m[i] % 2 == 0)
            {
                b++;

                if (b == 2)
                {
                    m[i - 1] = L;
                    b = 0;
                }
            }
        
    }
    for (int i = 0; i < n; i++)
    {
        if (m[i] == 0)
        {
            b = i;
            n--;
            for (int b = i; b < n; b++)
            {
                m[b] = m[b + 1];
            }
        }
    }

    printf("\n Result: ");
  
    for (int i = 0; i < n; i++)
    {
        printf("%i ", m[i]);
    }


    return 0;
}