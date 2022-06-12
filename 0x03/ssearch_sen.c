#include <stdio.h>
#include <stdlib.h>

int search(int a[], int n, int key)
{
	int i = 0;
	a[n] = key;
	while(1)
	{
		if(a[i] == key)
			break;
		i++;
	}
	return i == n ? -1 : i;
}

int main(void)
{
	int i, nx, ky, idx;
	int *x;
	puts("sentinel method");
	printf("Number of index : ");
	scanf("%d", &nx);
	x = calloc(nx + 1, sizeof(int));
	for(i = 0; i < nx; i++)
	{
		printf("x[%d] : ", i);
		scanf("%d", &x[i]);
	}
	printf("Search Value : ");
	scanf("%d", &ky);
	idx = search(x, nx, ky);
	if(idx == -1)
		puts("error");
	else
		printf("%d is in x[%d] \n", ky, idx);
	free(x);

	return 0;
}
