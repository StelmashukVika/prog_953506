
#include "pch.h"
#include <iostream>
#include <malloc.h>

int main()
{
    int n;
	printf("Enter number of lines : ");
	scanf_s("%d$", &n);

	int *array;
	array = (int*)malloc(n*n * sizeof(int));

	for (int i = 0; i < n; i++)  // цикл по строкам
	{
		int a = i + 1;
		for (int j = 0; j < n; j++)  // цикл по столбцам
		{
			*(array + i * n + j) = a;
			a++;
			if (a > n) a = 1;
		}
	}

	for (int i = 0; i < n; i++)  // цикл по строкам
	{
		for (int j = 0; j < n; j++)  // цикл по столбцам
		{
			printf("%5d ", *(array + i * n + j)); // 5 знакомест под элемент массива
		}
		printf("\n");
	}

	free(array);
	getchar();   getchar();
	return 0;
}
