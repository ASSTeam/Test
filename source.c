
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a, i;

	printf("1~10�� �ϳ��� �Է��Ͻÿ� : ");
	scanf_s("%d", &a, sizeof(a));
	printf("\n");

	int * num = (int *)malloc(sizeof(a));

	for (i = 0; i < a; i++)
	{
		num[i] = i + 1;
	}

	for (i = 0; i < a; i++)
	{
		printf("%d ", num[i]);
	}

	free(num);

	return 0;
}
