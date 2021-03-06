#include <stdio.h>
#include <stdlib.h>

void insertion(int a[], int n)
{
	int i, j;
	for(i = 1; i < n; i++)
	{
		int tmp = a[i];
		for(j = i; j > 0 && a[j - 1] > tmp; j--)
			a[j] = a[j - 1];
		a[j] = tmp;
	}
}

int main(void)
{
	int i, nx;
	int *x;
	puts("straight insertion sort");

	printf("Total : ");
	scanf("%d", &nx);
	x = calloc(nx, sizeof(int));

	for(i = 0; i < nx; i++)
	{
		printf("x[%d] : ", i);
		scanf("%d", &x[i]);
	}

	insertion(x, nx);

	puts("Ascending Sort");
	for(i = 0; i < nx; i++)
		printf("x[%d] = %d \n", i, x[i]);

	free(x);

	return 0;
}
