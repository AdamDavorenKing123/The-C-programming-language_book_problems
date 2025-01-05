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

void resetBoard();
print the board - void printBoard();
play begins in middle game (game5[][]) 
func - move to next game - the next game depends on the space which was selected in the last.
int checkFreeSpaces();
void playerMove();
char checkWinner();
void printWinner(char);
*/


/*
switch case choice
choose 1-9
choose 1:
enter x,y
corresponds to game1[x][y]
choose 2:
enter x,y
corresponds to game2[x][y]

user inputs whichever sub-game that they wish to play in
first move can be any 
the if the last player played in gameZ[i][j] you must play in metaboard (1-9)
eg
user plays metaboard (5) which means game5 then user inputs row/col [x][y]. 
On the next turn the metaboard available depends on what [x][y] was selected eg. 1, 1 --> game5[0][0] so meta must be top right or 
if game[0[0] is played in

*/

//const char PLAYER1 = 'X'; 
//const char PLAYER2 = 'O';
//
//char game1[3][3];
//char game2[3][3];
//char game3[3][3];
//char game4[3][3];
//char game5[3][3];
//char game6[3][3];
//char game7[3][3];
//char game8[3][3];
//char game9[3][3];
//char metaGame[3][3]; // meta(big) gameboard
///*
// \  /
//  \/
//  /\ 
// /  \
//
//  ---
// |	 |
// |	 |
//  ---
// */
//void resetBoard();
//void printBoard();
//int checkFreeSpaces();
//void playerMoveX();
//void playerMoveO();
////void playerMoveO();   //will be the same just print O instead of X
////char checkWinner();   // win conditions to check
//void printWinner(char winner); 
//
//
////void playerMove();
////void playerMove();
//// char checkWinner();
//
////void resetBoard();      Y
////void printBoard();      Y  
////int checkFreeSpaces();  Y
////void playerMove();      
////void computerMove();    
////char checkWinner();     
////void printWinner(char); Y
//
//int main() {
//	char winner = ' '; //if winner = empty space then currently no winner
//	resetBoard();
//
//	while (winner == ' ' && checkFreeSpaces() != 0) {  // no winner and all spaces aren't full
//		printBoard();
//		playerMoveX();
//		printBoard();
//		playerMoveO();
//		if (winner != ' ' || checkFreeSpaces() == 0)
//		{
//			break;
//		}
//	}
//
//	printBoard();
//	printWinner(winner);
//
//	return 0;
//}
//
//void resetBoard() //clear all squares in each sub-game makes them blank 
//{
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			game1[i][j] = ' ';
//			game2[i][j] = ' ';
//			game3[i][j] = ' ';
//			game4[i][j] = ' ';
//			game5[i][j] = ' ';
//			game6[i][j] = ' ';
//			game7[i][j] = ' ';
//			game8[i][j] = ' ';
//			game9[i][j] = ' ';
//			//metaGame[i][j] = ' ';
//		}
//
//	}
//}
//
//void printBoard()
//{
//	 printf(" %c | %c | %c ", game1[0][0], game1[0][1], game1[0][2]); printf("\t %c | %c | %c ", game2[0][0], game2[0][1], game2[0][2]); printf("\t %c | %c | %c ", game3[0][0], game3[0][1], game3[0][2]);
//	printf("\n---|---|---");  printf("\t---|---|---");  printf("\t---|---|---\n");
//	 printf(" %c | %c | %c ", game1[1][0], game1[1][1], game1[1][2]); printf("\t %c | %c | %c ", game2[1][0], game2[1][1], game2[1][2]); printf("\t %c | %c | %c ", game3[1][0], game3[1][1], game3[1][2]);
//	printf("\n---|---|---");  printf("\t---|---|---");  printf("\t---|---|---\n");
//	 printf(" %c | %c | %c ", game1[2][0], game1[2][1], game1[2][2]); printf("\t %c | %c | %c ", game2[2][0], game2[2][1], game2[2][2]); printf("\t %c | %c | %c ", game3[2][0], game3[2][1], game3[2][2]);
//	 printf("\n");
//	printf("\n");
//	 printf(" %c | %c | %c ", game4[0][0], game4[0][1], game4[0][2]); printf("\t %c | %c | %c ", game5[0][0], game5[0][1], game5[0][2]); printf("\t %c | %c | %c ", game6[0][0], game6[0][1], game6[0][2]);
//	printf("\n---|---|---");  printf("\t---|---|---");  printf("\t---|---|---\n");
//	 printf(" %c | %c | %c ", game4[1][0], game4[1][1], game4[1][2]); printf("\t %c | %c | %c ", game5[1][0], game5[1][1], game5[1][2]); printf("\t %c | %c | %c ", game6[1][0], game6[1][1], game6[1][2]);
//	printf("\n---|---|---");  printf("\t---|---|---");  printf("\t---|---|---\n");
//	 printf(" %c | %c | %c ", game4[2][0], game4[2][1], game4[2][2]); printf("\t %c | %c | %c ", game5[2][0], game5[2][1], game5[2][2]); printf("\t %c | %c | %c ", game6[2][0], game6[2][1], game6[2][2]);
//	printf("\n");
//	printf("\n");
//	 printf(" %c | %c | %c ", game7[0][0], game7[0][1], game7[0][2]); printf("\t %c | %c | %c ", game8[0][0], game8[0][1], game8[0][2]); printf("\t %c | %c | %c ", game9[0][0], game9[0][1], game9[0][2]);
//	printf("\n---|---|---");  printf("\t---|---|---");  printf("\t---|---|---\n");
//	 printf(" %c | %c | %c ", game7[1][0], game7[1][1], game7[1][2]); printf("\t %c | %c | %c ", game8[1][0], game8[1][1], game8[1][2]); printf("\t %c | %c | %c ", game9[1][0], game9[1][1], game9[1][2]);
//	printf("\n---|---|---");  printf("\t---|---|---");  printf("\t---|---|---\n");
//	 printf(" %c | %c | %c ", game7[2][0], game7[2][1], game7[2][2]); printf("\t %c | %c | %c ", game8[2][0], game8[2][1], game8[2][2]); printf("\t %c | %c | %c ", game9[2][0], game9[2][1], game9[2][2]);
//	 printf("\n");
//	printf("\n");
//
//}
//
//int checkFreeSpaces()
//{
//	int freeSpaces = 81;
//
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			if (game1[i][j] != ' ')
//			{
//				freeSpaces--;
//			}
//			else if (game2[i][j] != ' ')
//			{
//				freeSpaces--;
//			}
//			else if (game3[i][j] != ' ')
//			{
//				freeSpaces--;
//			}
//			else if (game4[i][j] != ' ')
//			{
//				freeSpaces--;
//			}
//			else if (game5[i][j] != ' ')
//			{
//				freeSpaces--;
//			}
//			else if (game6[i][j] != ' ')
//			{
//				freeSpaces--;
//			}
//			else if (game7[i][j] != ' ')
//			{
//				freeSpaces--;
//			}
//			else if (game8[i][j] != ' ')
//			{
//				freeSpaces--;
//			}
//			else if (game9[i][j] != ' ')
//			{
//				freeSpaces--;
//			}
//		}
//		
//	}
//	return freeSpaces;
//}
//
//void playerMoveX() {
//	int x, y;
//	int choice;
//
//	printf("Please enter a number 1-9 to select which sub-game you are going to make a move inside of: ");
//	scanf_s("%d", &choice);
//
//	switch (choice) {
//	case 1:
//		do {
//			printf("Enter row #(1-3): ");
//			scanf_s("%d", &x);
//			x--;
//			printf("Enter column #(1-3): ");
//			scanf_s("%d", &y);
//			y--;
//			printf("\n");
//			if (x < 0 || x >= 3 || y < 0 || y >= 3) {
//				printf("INVALID INPUT. Please enter values between 1 and 3.\n");
//			}
//			else if (game1[x][y] != ' ') {
//				printf("INVALID MOVE. Cell already occupied.\n");
//			}
//			else {
//				game1[x][y] = PLAYER1;
//				break;
//			}
//		} while (1);
//		break;
//
//	case 2:
//		do {
//			printf("Enter row #(1-3): ");
//			scanf_s("%d", &x);
//			x--;
//			printf("Enter column #(1-3): ");
//			scanf_s("%d", &y);
//			y--;
//			printf("\n");
//			if (x < 0 || x >= 3 || y < 0 || y >= 3) {
//				printf("INVALID INPUT. Please enter values between 1 and 3.\n");
//			}
//			else if (game2[x][y] != ' ') {
//				printf("INVALID MOVE. Cell already occupied.\n");
//			}
//			else {
//				game2[x][y] = PLAYER1;
//				break;
//			}
//		} while (1);
//		break;
//
//	case 3:
//		do {
//			printf("Enter row #(1-3): ");
//			scanf_s("%d", &x);
//			x--;
//			printf("Enter column #(1-3): ");
//			scanf_s("%d", &y);
//			y--;
//			printf("\n");
//			if (x < 0 || x >= 3 || y < 0 || y >= 3) {
//				printf("INVALID INPUT. Please enter values between 1 and 3.\n");
//			}
//			else if (game3[x][y] != ' ') {
//				printf("INVALID MOVE. Cell already occupied.\n");
//			}
//			else {
//				game3[x][y] = PLAYER1;
//				break;
//			}
//		} while (1);
//		break;
//
//	case 4:
//		do {
//			printf("Enter row #(1-3): ");
//			scanf_s("%d", &x);
//			x--;
//			printf("Enter column #(1-3): ");
//			scanf_s("%d", &y);
//			y--;
//			printf("\n");
//			if (x < 0 || x >= 3 || y < 0 || y >= 3) {
//				printf("INVALID INPUT. Please enter values between 1 and 3.\n");
//			}
//			else if (game4[x][y] != ' ') {
//				printf("INVALID MOVE. Cell already occupied.\n");
//			}
//			else {
//				game4[x][y] = PLAYER1;
//				break;
//			}
//		} while (1);
//		break;
//
//	case 5:
//		do {
//			printf("Enter row #(1-3): ");
//			scanf_s("%d", &x);
//			x--;
//			printf("Enter column #(1-3): ");
//			scanf_s("%d", &y);
//			y--;
//			printf("\n");
//			if (x < 0 || x >= 3 || y < 0 || y >= 3) {
//				printf("INVALID INPUT. Please enter values between 1 and 3.\n");
//			}
//			else if (game5[x][y] != ' ') {
//				printf("INVALID MOVE. Cell already occupied.\n");
//			}
//			else {
//				game5[x][y] = PLAYER1;
//				break;
//			}
//		} while (1);
//		break;
//
//	case 6:
//		do {
//			printf("Enter row #(1-3): ");
//			scanf_s("%d", &x);
//			x--;
//			printf("Enter column #(1-3): ");
//			scanf_s("%d", &y);
//			y--;
//			printf("\n");
//			if (x < 0 || x >= 3 || y < 0 || y >= 3) {
//				printf("INVALID INPUT. Please enter values between 1 and 3.\n");
//			}
//			else if (game6[x][y] != ' ') {
//				printf("INVALID MOVE. Cell already occupied.\n");
//			}
//			else {
//				game6[x][y] = PLAYER1;
//				break;
//			}
//		} while (1);
//		break;
//
//	case 7:
//		do {
//			printf("Enter row #(1-3): ");
//			scanf_s("%d", &x);
//			x--;
//			printf("Enter column #(1-3): ");
//			scanf_s("%d", &y);
//			y--;
//			printf("\n");
//			if (x < 0 || x >= 3 || y < 0 || y >= 3) {
//				printf("INVALID INPUT. Please enter values between 1 and 3.\n");
//			}
//			else if (game7[x][y] != ' ') {
//				printf("INVALID MOVE. Cell already occupied.\n");
//			}
//			else {
//				game7[x][y] = PLAYER1;
//				break;
//			}
//		} while (1);
//		break;
//
//	case 8:
//		do {
//			printf("Enter row #(1-3): ");
//			scanf_s("%d", &x);
//			x--;
//			printf("Enter column #(1-3): ");
//			scanf_s("%d", &y);
//			y--;
//			printf("\n");
//			if (x < 0 || x >= 3 || y < 0 || y >= 3) {
//				printf("INVALID INPUT. Please enter values between 1 and 3.\n");
//			}
//			else if (game8[x][y] != ' ') {
//				printf("INVALID MOVE. Cell already occupied.\n");
//			}
//			else {
//				game8[x][y] = PLAYER1;
//				break;
//			}
//		} while (1);
//		break;
//
//	case 9:
//		do {
//			printf("Enter row #(1-3): ");
//			scanf_s("%d", &x);
//			x--;
//			printf("Enter column #(1-3): ");
//			scanf_s("%d", &y);
//			y--;
//			printf("\n");
//			if (x < 0 || x >= 3 || y < 0 || y >= 3) {
//				printf("INVALID INPUT. Please enter values between 1 and 3.\n");
//			}
//			else if (game9[x][y] != ' ') {
//				printf("INVALID MOVE. Cell already occupied.\n");
//			}
//			else {
//				game9[x][y] = PLAYER1;
//				break;
//			}
//		} while (1);
//		break;
//	default:
//		printf("INVALID BOARD SELECTION. Please choose a number between 1 and 9.\n");
//		break;
//	}
//}
//// ////////////////////////////////////////////////////////////////////////////////////////////////////////////
//void playerMoveO(){
//	int x, y;
//	int choice;
//
//	printf("Please enter a number 1-9 to decide which sub-game you would like to start in: ");
//	scanf_s("%d", &choice);
//
//	switch (choice) {
//	case 1:
//		do {
//			printf("Enter row #(1-3): ");
//			scanf_s("%d", &x);
//			x--;
//			printf("Enter column #(1-3): ");
//			scanf_s("%d", &y);
//			y--;
//			printf("\n");
//			if (x < 0 || x >= 3 || y < 0 || y >= 3) {
//				printf("INVALID INPUT. Please enter values between 1 and 3.\n");
//			}
//			else if (game1[x][y] != ' ') {
//				printf("INVALID MOVE. Cell already occupied.\n");
//			}
//			else {
//				game1[x][y] = PLAYER2;
//				break;
//			}
//		} while (1);
//		break;
//
//	case 2:
//		do {
//			printf("Enter row #(1-3): ");
//			scanf_s("%d", &x);
//			x--;
//			printf("Enter column #(1-3): ");
//			scanf_s("%d", &y);
//			y--;
//			printf("\n");
//			if (x < 0 || x >= 3 || y < 0 || y >= 3) {
//				printf("INVALID INPUT. Please enter values between 1 and 3.\n");
//			}
//			else if (game2[x][y] != ' ') {
//				printf("INVALID MOVE. Cell already occupied.\n");
//			}
//			else {
//				game2[x][y] = PLAYER2;
//				break;
//			}
//		} while (1);
//		break;
//
//	case 3:
//		do {
//			printf("Enter row #(1-3): ");
//			scanf_s("%d", &x);
//			x--;
//			printf("Enter column #(1-3): ");
//			scanf_s("%d", &y);
//			y--;
//			printf("\n");
//			if (x < 0 || x >= 3 || y < 0 || y >= 3) {
//				printf("INVALID INPUT. Please enter values between 1 and 3.\n");
//			}
//			else if (game3[x][y] != ' ') {
//				printf("INVALID MOVE. Cell already occupied.\n");
//			}
//			else {
//				game3[x][y] = PLAYER2;
//				break;
//			}
//		} while (1);
//		break;
//
//	case 4:
//		do {
//			printf("Enter row #(1-3): ");
//			scanf_s("%d", &x);
//			x--;
//			printf("Enter column #(1-3): ");
//			scanf_s("%d", &y);
//			y--;
//			printf("\n");
//			if (x < 0 || x >= 3 || y < 0 || y >= 3) {
//				printf("INVALID INPUT. Please enter values between 1 and 3.\n");
//			}
//			else if (game4[x][y] != ' ') {
//				printf("INVALID MOVE. Cell already occupied.\n");
//			}
//			else {
//				game4[x][y] = PLAYER2;
//				break;
//			}
//		} while (1);
//		break;
//
//	case 5:
//		do {
//			printf("Enter row #(1-3): ");
//			scanf_s("%d", &x);
//			x--;
//			printf("Enter column #(1-3): ");
//			scanf_s("%d", &y);
//			y--;
//			printf("\n");
//			if (x < 0 || x >= 3 || y < 0 || y >= 3) {
//				printf("INVALID INPUT. Please enter values between 1 and 3.\n");
//			}
//			else if (game5[x][y] != ' ') {
//				printf("INVALID MOVE. Cell already occupied.\n");
//			}
//			else {
//				game5[x][y] = PLAYER2;
//				break;
//			}
//		} while (1);
//		break;
//
//	case 6:
//		do {
//			printf("Enter row #(1-3): ");
//			scanf_s("%d", &x);
//			x--;
//			printf("Enter column #(1-3): ");
//			scanf_s("%d", &y);
//			y--;
//			printf("\n");
//			if (x < 0 || x >= 3 || y < 0 || y >= 3) {
//				printf("INVALID INPUT. Please enter values between 1 and 3.\n");
//			}
//			else if (game6[x][y] != ' ') {
//				printf("INVALID MOVE. Cell already occupied.\n");
//			}
//			else {
//				game6[x][y] = PLAYER2;
//				break;
//			}
//		} while (1);
//		break;
//
//	case 7:
//		do {
//			printf("Enter row #(1-3): ");
//			scanf_s("%d", &x);
//			x--;
//			printf("Enter column #(1-3): ");
//			scanf_s("%d", &y);
//			y--;
//			printf("\n");
//			if (x < 0 || x >= 3 || y < 0 || y >= 3) {
//				printf("INVALID INPUT. Please enter values between 1 and 3.\n");
//			}
//			else if (game7[x][y] != ' ') {
//				printf("INVALID MOVE. Cell already occupied.\n");
//			}
//			else {
//				game7[x][y] = PLAYER2;
//				break;
//			}
//		} while (1);
//		break;
//
//	case 8:
//		do {
//			printf("Enter row #(1-3): ");
//			scanf_s("%d", &x);
//			x--;
//			printf("Enter column #(1-3): ");
//			scanf_s("%d", &y);
//			y--;
//			printf("\n");
//			if (x < 0 || x >= 3 || y < 0 || y >= 3) {
//				printf("INVALID INPUT. Please enter values between 1 and 3.\n");
//			}
//			else if (game8[x][y] != ' ') {
//				printf("INVALID MOVE. Cell already occupied.\n");
//			}
//			else {
//				game8[x][y] = PLAYER2;
//				break;
//			}
//		} while (1);
//		break;
//
//	case 9:
//		do {
//			printf("Enter row #(1-3): ");
//			scanf_s("%d", &x);
//			x--;
//			printf("Enter column #(1-3): ");
//			scanf_s("%d", &y);
//			y--;
//			printf("\n");
//			if (x < 0 || x >= 3 || y < 0 || y >= 3) {
//				printf("INVALID INPUT. Please enter values between 1 and 3.\n");
//			}
//			else if (game9[x][y] != ' ') {
//				printf("INVALID MOVE. Cell already occupied.\n");
//			}
//			else {
//				game9[x][y] = PLAYER2;
//				break;
//			}
//		} while (1);
//		break;
//	default:
//		printf("INVALID BOARD SELECTION. Please choose a number between 1 and 9.\n");
//		break;
//	}
//}
//void printWinner(char winner)
//{
//	if (winner == PLAYER1)
//	{
//		printf("X's win");
//	}
//	else if (winner == PLAYER2)
//	{
//		printf("0's win");
//	}
//	else
//	{
//		printf("IT'S A DRAW");
//	}
//}
// ///////////////////////////////////////////////////////////////////////// DO NOT: uncomment below this line
//char checkWinner()
//{
//	char winner = ' ';
//	for (int i = 0;i < 3; i++)
//	{
//		check rows
//		if (game[i][0] == game[i][1] && game[i][0] == game[i][2] && game[i][0] != ' ')
//		{
//			winner = game[i][0];
//		}
//		check columns
//		else if (game[0][i] == game[1][i] && game[0][i] == game[2][i] && game[0][i] != ' ')
//		{
//			winner = game[0][i];
//		}
//	}
//	check diagonals
//	if (game[0][0] == game[1][1] && game[0][0] == game[2][2] && game[0][0] != ' ')
//	{
//		winner = game[0][0];
//	}
//	check other diagonal
//	else if (game[0][2] == game[1][1] && game[0][2] == game[2][0] && game[0][2] != ' ')
//	{
//		winner = game[0][2];
//	}
//	return winner;
//}