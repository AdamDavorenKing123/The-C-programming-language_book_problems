#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

/* pseudocode for super tic-tac-toe game */
/*
9 tic-tac-toe games inside of 1 master game

each tic-tac-toe game has 9 spaces

a players move decides which sub game the next player must play in

if you win a sub game you win that area of the master game

win the game by winning three sub games (to win a sub game (regualr tic-tac-toe) -> win 3 x's or o's in a row vertically, horizontally or diagonally)
in a row vertically, horizontally, or diagonally on the main game

instead of game[][]

I could do game1[][] game2[][] game3[][]
            ...        ...     ....
            ...        ...     game9[][]

play begins in middle game (game5[][]) 
*/
char game1[3][3];
char game2[3][3];
char game3[3][3];
char game4[3][3];
char game5[3][3];
char game6[3][3];
char game7[3][3];
char game8[3][3];
char game9[3][3];

void printBoard();

int main() {

	printBoard();


	return 0;
}





void printBoard()
{
	printf(" %c  | %c  | %c ", game1[0][0], game1[0][1], game1[0][2]); printf("\t %c  | %c  | %c ", game2[0][0], game2[0][1], game2[0][2]); printf("\t %c  | %c  | %c ", game3[0][0], game3[0][1], game3[0][2]);
	printf("\n---|---|---");  printf("\t---|---|---");  printf("\t---|---|---\n");
	printf(" %c  | %c  | %c ", game1[0][0], game1[0][1], game1[0][2]); printf("\t %c  | %c  | %c ", game2[0][0], game2[0][1], game2[0][2]); printf("\t %c  | %c  | %c ", game3[0][0], game3[0][1], game3[0][2]);
	printf("\n---|---|---");  printf("\t---|---|---");  printf("\t---|---|---\n");
	printf(" %c  | %c  | %c ", game1[0][0], game1[0][1], game1[0][2]); printf("\t %c  | %c  | %c ", game2[0][0], game2[0][1], game2[0][2]); printf("\t %c  | %c  | %c ", game3[0][0], game3[0][1], game3[0][2]);
	printf("\n");
	printf("\n");
	printf(" %c  | %c  | %c ", game4[0][0], game4[0][1], game4[0][2]); printf("\t %c  | %c  | %c ", game5[0][0], game5[0][1], game5[0][2]); printf("\t %c  | %c  | %c ", game6[0][0], game6[0][1], game6[0][2]);
	printf("\n---|---|---");  printf("\t---|---|---");  printf("\t---|---|---\n");
	printf(" %c  | %c  | %c ", game4[0][0], game4[0][1], game4[0][2]); printf("\t %c  | %c  | %c ", game5[0][0], game5[0][1], game5[0][2]); printf("\t %c  | %c  | %c ", game6[0][0], game6[0][1], game6[0][2]);
	printf("\n---|---|---");  printf("\t---|---|---");  printf("\t---|---|---\n");
	printf(" %c  | %c  | %c ", game4[0][0], game4[0][1], game4[0][2]); printf("\t %c  | %c  | %c ", game5[0][0], game5[0][1], game5[0][2]); printf("\t %c  | %c  | %c ", game6[0][0], game6[0][1], game6[0][2]);
	printf("\n");
	printf("\n");
	printf(" %c  | %c  | %c ", game7[0][0], game7[0][1], game7[0][2]); printf("\t %c  | %c  | %c ", game8[0][0], game8[0][1], game8[0][2]); printf("\t %c  | %c  | %c ", game9[0][0], game9[0][1], game9[0][2]);
	printf("\n---|---|---");  printf("\t---|---|---");  printf("\t---|---|---\n");
	printf(" %c  | %c  | %c ", game7[0][0], game7[0][1], game7[0][2]); printf("\t %c  | %c  | %c ", game8[0][0], game8[0][1], game8[0][2]); printf("\t %c  | %c  | %c ", game9[0][0], game9[0][1], game9[0][2]);
	printf("\n---|---|---");  printf("\t---|---|---");  printf("\t---|---|---\n");
	printf(" %c  | %c  | %c ", game7[0][0], game7[0][1], game7[0][2]); printf("\t %c  | %c  | %c ", game8[0][0], game8[0][1], game8[0][2]); printf("\t %c  | %c  | %c ", game9[0][0], game9[0][1], game9[0][2]);
	printf("\n");
	printf("\n");

}
