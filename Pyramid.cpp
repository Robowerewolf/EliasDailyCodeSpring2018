#include<stdio.h>
#include<conio.h>
void main()
{
	int i, n, j;
	//clrscr();

	printf("\n Please Give The Height of the pyramid:  ");
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n - i; j++)
			printf("  ");
		for (j = 1; j <= 2 * i - 1; j++)
			printf(" *");
		printf("\n");
	}

	_getch();
}