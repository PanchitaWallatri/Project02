#include<stdio.h>
int main()
{
	int i, num, sum = 0;
	for (i = 0; i < 10; i++)
	{
		printf("Enter number #%d : ", i+1);
		scanf_s("%d", &num);
		sum = sum + num;
	}
	printf("Sum of 10 numbers = %d\n", sum);
	printf("Average of 10 numbers = %.2f\n", sum / 10.0);
	return 0;
}