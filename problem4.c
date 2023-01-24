#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define LOWER_BOUND 100
#define UPPER_BOUND 999

int is_palindrome(char[], int);

int main()
{
	int answer = 0;	
	for(int i = UPPER_BOUND; i >= LOWER_BOUND; i--)
	{
		for(int j = UPPER_BOUND; j >= LOWER_BOUND; j--)
		{
			int result = i * j;
			char number[10];
			sprintf(number, "%d", result);			
			if(is_palindrome(number, strlen(number)))
				if(result > answer) answer = result;
		}
	}
	printf("%d\n", answer);
	return 0;
}

int is_palindrome(char string[], int length)
{
	int low = 0, hi = length - 1;
	while(low < hi)
	{
		if(string[low++] != string[hi--])
			return 0;
	}
	return 1;
}
