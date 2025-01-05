//#include <stdio.h>
//#include <stdlib.h>
//#include <ctype.h>
//#include <time.h>
//
//const char PLAYER1 = 'X'; 
//const char PLAYER2 = 'O';
//
//char games[9][3][3];
//
//void resetBoard();
//void printBoard();
//int checkFreeSpaces();
//void playerMoveX(int);
//void playerMoveO(int);
//void printWinner(char winner);
//
//int main() {
//    //printf("Each turn, you mark one of the small squares. When you get three in a row on a small board, you have won that board\nTo win the game, you need to win three small boards in a row.\n");
//    //printf("You don not get to pick which of the nine boards to play on.That is determined by your opponents previous move\nWhichever square he picks, that is the board you must play in next. (And whichever square you pick will determine which board he plays on next.)\n");
//    //printf("\n FAQS \n");
//    //printf("\n1, What if my opponent sends me to a board that is already been won?\n\tIn that case, congratulations, you get to go anywhere you like, on any of the other boards.\n\t(This means you should avoid sending your opponent to an already - won board!)\n");
//    //printf("2, What if one of the small boards results in a tie ? I recommend that the board counts for neither X nor O.\n\tBut, if you feel like a crazy variant, you could agree before the game to count a tied board for both X and O.");
//    //printf("\n\n\n");
//    char winner = ' '; // If winner == ' ', no winner yet
//    int currentSubGame;  // Track the current sub-game
//    resetBoard();        // Initialize the boards
//    printBoard();
//    do {
//        printf("Choose the starting sub-game (1-9): "); // Prompt the player to select the starting sub-game
//        scanf_s("%d", &currentSubGame);
//        currentSubGame -= 1;       // Adjusts to 0-based indexing  [ 0 <-> 8 ][][]
//        if (currentSubGame < 0 || currentSubGame > 8)
//        {
//            printf("INVALID SELECTION. Please choose a number between 1 and 9: ");
//            scanf_s("%d", &currentSubGame);
//        }
//    } while (currentSubGame > 0 || currentSubGame < 8);
//    
////    //////////////////////////////////////////////////////////////////////////////////////////// DO NOT TOUCH
//  //  if (currentSubGame < 0 || currentSubGame > 8) { 
//  //      printf("INVALID SELECTION. Please choose a number between 1 and 9: ");
//  //  }
//
//  //  printf("exited while loop ");
//  //  while (currentSubGame < 0 || currentSubGame > 8) 
//  //  {
//		//
//		//scanf_s("%d", &currentSubGame);
//		//currentSubGame -= 1;
//  //      playerMoveX(currentSubGame);
//  //      printBoard();
//  //  }
// /*   while (currentSubGame < 0|| currentSubGame > 8) { 
//        printf("INVALID SELECTION. Please choose a number between 1 and 9: ");
//        scanf_s("%d", &currentSubGame);
//        currentSubGame -= 1;
//    }*/
//  
//        while (winner == ' ' && checkFreeSpaces() > 0) {   // while there is no winner and there are still free spaces
//
//        // Logic to determine the next sub-game based on the last move
//        // For now, allow player to choose the next sub-game freely
//        // later this will be the if sub-game won move anywhere option
//        //TODO: make current sub-game dependant on the last move
//        
//        // O's turn
//        printf("Current sub-game: %d\n", currentSubGame + 1);
//        printf("Choose the next sub-game (1-9): ");
//        scanf_s("%d", &currentSubGame);
//        currentSubGame -= 1;
//        playerMoveO(currentSubGame);
//        printBoard();
//        // X's turn
//        printf("Current sub-game: %d\n", currentSubGame + 1);
//        printf("Choose the next sub-game (1-9): ");
//        scanf_s("%d", &currentSubGame);
//        currentSubGame -= 1;
//        playerMoveX(currentSubGame);
//        printBoard();
//    }
//
//    printBoard();
//    printWinner(winner);
//
//    return 0;
//}
//
//void resetBoard() {
//    for (int g = 0; g < 9; g++) {
//        for (int i = 0; i < 3; i++) {
//            for (int j = 0; j < 3; j++) {
//                games[g][i][j] = ' '; // Initialize all cells to empty
//            }
//        }
//    }
//}
//int checkFreeSpaces() {
//    int freeSpaces = 0;
//
//    for (int g = 0; g < 9; g++) {  // Iterate through all sub-games
//        for (int i = 0; i < 3; i++) {
//            for (int j = 0; j < 3; j++) {
//                if (games[g][i][j] == ' ') {
//                    freeSpaces++; // Increment for every empty space
//                }
//            }
//        }
//    }
//
//    return freeSpaces;
//}
//
//void printBoard()
//{
//	 printf(" %c | %c | %c ", games[0][0][0], games[0][0][1], games[0][0][2]); printf("\t %c | %c | %c ", games[1][0][0], games[1][0][1], games[1][0][2]); printf("\t %c | %c | %c ", games[2][0][0], games[2][0][1], games[2][0][2]);
//	printf("\n---|---|---");  printf("\t---|---|---");  printf("\t---|---|---\n");
//	 printf(" %c | %c | %c ", games[0][1][0], games[0][1][1], games[0][1][2]); printf("\t %c | %c | %c ", games[1][1][0], games[1][1][1], games[1][1][2]); printf("\t %c | %c | %c ", games[2][1][0], games[2][1][1], games[2][1][2]);
//	printf("\n---|---|---");  printf("\t---|---|---");  printf("\t---|---|---\n");
//	 printf(" %c | %c | %c ", games[0][2][0], games[0][2][1], games[0][2][2]); printf("\t %c | %c | %c ", games[1][2][0], games[1][2][1], games[1][2][2]); printf("\t %c | %c | %c ", games[2][2][0], games[2][2][1], games[2][2][2]);
//	 printf("\n");
//	printf("\n");
//	 printf(" %c | %c | %c ", games[3][0][0], games[3][0][1], games[3][0][2]); printf("\t %c | %c | %c ", games[4][0][0], games[4][0][1], games[4][0][2]); printf("\t %c | %c | %c ", games[5][0][0], games[5][0][1], games[5][0][2]);
//	printf("\n---|---|---");  printf("\t---|---|---");  printf("\t---|---|---\n");
//	 printf(" %c | %c | %c ", games[3][1][0], games[3][1][1], games[3][1][2]); printf("\t %c | %c | %c ", games[4][1][0], games[4][1][1], games[4][1][2]); printf("\t %c | %c | %c ", games[5][1][0], games[5][1][1], games[5][1][2]);
//	printf("\n---|---|---");  printf("\t---|---|---");  printf("\t---|---|---\n");
//	 printf(" %c | %c | %c ", games[3][2][0], games[3][2][1], games[3][2][2]); printf("\t %c | %c | %c ", games[4][2][0], games[4][2][1], games[4][2][2]); printf("\t %c | %c | %c ", games[5][2][0], games[5][2][1], games[5][2][2]);
//	printf("\n");
//	printf("\n");
//	 printf(" %c | %c | %c ", games[6][0][0], games[6][0][1], games[6][0][2]); printf("\t %c | %c | %c ", games[7][0][0], games[7][0][1], games[7][0][2]); printf("\t %c | %c | %c ", games[8][0][0], games[8][0][1], games[8][0][2]);
//	printf("\n---|---|---");  printf("\t---|---|---");  printf("\t---|---|---\n");
//	 printf(" %c | %c | %c ", games[6][1][0], games[6][1][1], games[6][1][2]); printf("\t %c | %c | %c ", games[7][1][0], games[7][1][1], games[7][1][2]); printf("\t %c | %c | %c ", games[8][1][0], games[8][1][1], games[8][1][2]);
//	printf("\n---|---|---");  printf("\t---|---|---");  printf("\t---|---|---\n");
//	 printf(" %c | %c | %c ", games[6][2][0], games[6][2][1], games[6][2][2]); printf("\t %c | %c | %c ", games[7][2][0], games[7][2][1], games[7][2][2]); printf("\t %c | %c | %c ", games[8][2][0], games[8][2][1], games[8][2][2]);
//	 printf("\n");
//	printf("\n");
//}
//void playerMoveX(int currentSubGame) {
//    int x, y;
//
//    do {
//        printf("Enter row #(1-3): ");
//        scanf_s("%d", &x);
//        x--; // Adjust for 0-based indexing
//        printf("Enter column #(1-3): ");
//        scanf_s("%d", &y);
//        y--; // Adjust for 0-based indexing
//
//        // Validate the move
//        if (x < 0 || x >= 3 || y < 0 || y >= 3) {
//            printf("INVALID INPUT. Please enter values between 1 and 3.\n");
//        }
//        else if (games[currentSubGame][x][y] != ' ') {
//            printf("INVALID MOVE. Cell already occupied.\n");
//        }
//        else {
//            // Make the move
//            games[currentSubGame][x][y] = PLAYER1;
//            break;
//        }
//    } while (1);
//}
//
//void playerMoveO(int currentSubGame) {
//    int x, y;
//
//    do {
//        printf("Enter row #(1-3): ");
//        scanf_s("%d", &x);
//        x--; // Adjust for 0-based indexing
//        printf("Enter column #(1-3): ");
//        scanf_s("%d", &y);
//        y--; // Adjust for 0-based indexing
//
//        // Validate the move
//        if (x < 0 || x >= 3 || y < 0 || y >= 3) {
//            printf("INVALID INPUT. Please enter values between 1 and 3.\n");
//        }
//        else if (games[currentSubGame][x][y] != ' ') {
//            printf("INVALID MOVE. Cell already occupied.\n");
//        }
//        else {
//            // Make the move
//            games[currentSubGame][x][y] = PLAYER2;
//            break;
//        }
//    } while (1);
//}
//
//void printWinner(char winner) {
//    if (winner == PLAYER1) {
//        printf("Player X wins the game!\n");
//    }
//    else if (winner == PLAYER2) {
//        printf("Player O wins the game!\n");
//    }
//    else {
//        printf("It's a draw!\n");
//    }
//}
