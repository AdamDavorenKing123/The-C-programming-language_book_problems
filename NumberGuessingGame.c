/*
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
	const int MIN = 1;
	const int MAX = 100;
	int guess;
	int answer;

	srand(time(0)); //uses current time as a seed
	
	// generate random number between min and max
	answer = rand() % MAX + MIN;
	
	do {
		printf("Enter a guess: ");
		scanf_s("%d", &guess);
		if(guess > answer)
		{
			printf("Too high!\n");
		}
		else if (guess < answer)
		{
			printf("too low!\n");
		}
		else
		{
			printf("CORRECT!\n");
		}
	} while (guess != answer);

	printf("answer: %d\n", answer);

	return 0;
}
*/