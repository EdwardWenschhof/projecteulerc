#include <stdio.h>
#include <limits.h>

#define NUM_PRIMES 10001

int is_prime(int);

int main()
{
	int num_primes = 0;
	int answer;
	for(int i = 0; i < INT_MAX; i++)
	{
		if(is_prime(i))
		{
			num_primes++;
			if(num_primes == NUM_PRIMES)
			{
				answer = i;
				break;
			}
		}

	}
	printf("ANSWER: %d\n", answer);		
		
	return 0;
}

int is_prime(int num)
{
	if(num == 2)
		return 1;
	if(num == 0 || num == 1 || num % 2 == 0)
		return 0;

	for(int i = 3; i < num / 2; i++)
		if(num % i == 0)
			return 0;

	return 1;
}
