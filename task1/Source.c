#include<stdio.h>
#include<malloc.h>
#include<cmath>
#define C 1000

int main()
{
	int n, num, a, b, c = 0, i, d = 0;

	int m[C];

	printf("n =  ");
	scanf("%i", &n);

	for (int i = 0; i < n; i++)
	{
		printf("enter number: ");
		scanf("%i", &num);
		m[i] = num;
	}
	
	for (int i = 0; i <= n-1; i++)
	{
		if (m[i] < 0)

			a = pow(m[i], 2);

		else

			a = m[i];

		if (m[i + 1] < 0)

			b = pow(m[i + 1], 2);

		else

			b = m[i + 1];

		if (a < b)

			c = 1;

			break;
	}
		if (c == 1)
			for (i = 0; i < n; i++)
			{
				d = d + m[i];
			}
		else
		{
			d = 1;
			for (i = 0; i < n; i++)
			{
				d = d * m[i];
			}
		}
	printf("\n Result: %i ",d);

	return 0;
}
