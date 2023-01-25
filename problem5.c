#include <stdio.h>
#include <limits.h>

int main()
{
	int answer = 0;
	int gotAnswer = 0;
	for(int i = 21; i < INT_MAX; i++)
	{
		for(int j = 1; j <= 20; j++)
		{
			if(i % j != 0)
				gotAnswer = 0;
			else
				gotAnswer = 1;

			if(!gotAnswer)
				break;
		}
		if(gotAnswer)
		{
			answer = i;
			break;
		}
	}
	printf("ANSWER: %d\n", answer);

	return 0;
}
