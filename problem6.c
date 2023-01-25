#include <stdio.h>

int main()
{
	int sum_of_nums = 0, sum_of_squares = 0, difference = 0;

	for(int i = 0; i <= 100; i++)
	{
		sum_of_nums += i;
		sum_of_squares += (i * i);
	}
	difference = (sum_of_nums * sum_of_nums) - sum_of_squares;
	printf("DIFFERENCE: %d\n", difference);

	return 0;
}
