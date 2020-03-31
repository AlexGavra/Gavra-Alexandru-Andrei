#include<stdio.h>

int main()
{
	int C, N, x, x2;
	do {
		printf("C="); scanf("%d", &C);

	} while (C > 7);

	printf("N="); scanf("%d", &N);
	printf("Da n numere:\n");
	while (N)
	{
		scanf("%d", &x);
		x2 = x >> C;
		x2 = x2 & 1;
		if (x2 == 1)
		{
			printf("%d e bun\n", x);
		}
		N--;
	}
	system("pause");
	return 0;
}