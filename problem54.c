#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NUM_CARDS_HAND 5
#define CARD_SIZE 2*sizeof(char)
#define HAND_SIZE 10*sizeof(char)
#define NUM_HANDS 1000

void read_hands(char[][], char[][]);
Hand_Rank find_rank(char[][]);

typedef enum 
{
	HIGH_CARD,
	ONE_PAIR,
	TWO_PAIRS, 
	THREE_OF_A_KIND,
	STRAIGHT,
	FLUSH,
	FULL_HOUSE,
	FOUR_OF_A_KIND,
	STRAIGHT_FLUSH,
	ROYAL_FLUSH
} Hand_Rank;

int main()
{
	int one_wins = 0, two_wins = 0;
	FILE *file;
	file = fopen("./poker.txt", "r");
	fseek(file, 0, SEEK_SET);
	for(int i = 1; i <= 1000; i++)
	{
		char hand_one[NUM_CARDS_HAND][CARD_SIZE + 1];
		char hand_two[NUM_CARDS_HAND][CARD_SIZE + 1];
		read_hands(hand_one, hand_two);
		Hand_Rank rank1 = find_rank(hand_one);
		Hand_Rank rank2 = find_rank(hand_two);
		if(rank1 > rank2) one_wins++;
		else if(rank1 < rank2) two_wins++;
	}
	return 0;
}

void read_hands(char hand1[][], char hand2[][])
{

	for(int j = 0; j < NUM_CARDS_HAND; j++)
	{
		fscanf(file, "%s%*c", hand_one[j]);
	}
	for(int k = 0; k < NUM_CARDS_HAND - 1; k++)
	{
		fscanf(file, "%s%*c", hand_two[k]);
	}
	fscanf(file, "%s%*c", hand_two[NUM_CARDS_HAND - 1]);
}

Hand_Rank find_rank(char hand[][])
{
	for(int i = 0; i < NUM_CARDS_HAND)
	{
		













