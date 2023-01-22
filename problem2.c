#include <stdio.h>

#define UPPER_LIMIT 4000000

int main()
{
	int prev = 1, curr = 2, sum = 0;

	while(curr < UPPER_LIMIT)
	{
		if(curr % 2 == 0)
			sum += curr;
		int temp = curr;
		curr = curr + prev;
		prev = temp;
	}

	printf("SUM: %d\n", sum);
	return 0;
}
