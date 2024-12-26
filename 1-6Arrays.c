#include <stdio.h>
//*Write a program to print a histogram of the length of words in its input. (try: Horizontal bars & vertical bars)*/
//main() {
//	// find out the length of words
//	// c-'0'
//	// print a histogram of said length
//Version 1: horizontal bars

//main() {
//	int c,counter;
//	counter = 0;
//	while ((c = getchar()) != EOF)
//		if (c == ' ' || c == '\n' || c == '\t')
//			printf("\n");
//		else {
//			++counter;
//			printf("*");
//
//		}
//}

//Version 2: Vertical bars
//main() {
//	int c;
//	while ((c = getchar()) != EOF)
//		if (c == ' ' || c == '\n' || c == '\t')
//			printf("\n");
//		else {
//			printf("*");
//		}
//}
///////copied solution
//#define IN 1
//#define OUT 0
//#define MAX_WIDTH 30
//#define MAX_HEIGHT 15
//main() {
//	int wordLen[MAX_WIDTH] = { 0 };
//	int wordIndex = 0;
//
//	int c;
//	int state = OUT;
//
//	while ((c = getchar()) != EOF) {
//		if (c == ' ' || c == '\n' || c == '\t') {
//			if (state == IN) {
//				++wordIndex;
//				state = OUT;
//			}
//		}
//		else if (state == OUT) {
//			state = IN;
//			if (wordIndex < MAX_WIDTH && wordLen[wordIndex] < MAX_HEIGHT) {
//				++wordLen[wordIndex];
//			}
//		}
//		else {
//			if (wordIndex < MAX_WIDTH && wordLen[wordIndex] < MAX_HEIGHT) {
//				++wordLen[wordIndex];
//			}
//		}
//	}
//	int max = 0;
//	for (int i = 0; i < MAX_WIDTH && wordLen[i] != 0;i++) {
//		if (wordLen[i] > max) {
//			max = wordLen[i];
//		}
//	}
//	for (int row = max; row > 0; --row) {
//		for (int col = 0; col < MAX_WIDTH && wordLen[col] != 0; col++) {
//			if (wordLen[col] >= row) {
//				putchar('|');
//				putchar(' ');
//			}
//			else {
//				putchar(' ');
//				putchar(' ');
//			}
//		}
//		putchar('\n');
//	}
//}
/////////Array  example Q
/*count digits, white space, others*/
//main() {
//	int c, i, nwhite, nother;
//	int ndigit[10]; //creating an array of size 10
//
//	nwhite = nother = 0;
//	for (i = 0; i < 10; i++)  //filling the array with 0s
//		ndigit[i] = 0;
//
//	while ((c = getchar()) != EOF)
//		if (c >= '0' && c <= '9')
//			++ndigit[c-'0'];
//		else if (c == ' ' || c == '\n' || c == '\t')
//			++nwhite;
//		else
//			++nother;
//
//	printf("digits = ");
//	for (i = 0;i < 10;i++)
//		printf("%d", ndigit[i]);
//	printf(",white space = %d, other = %d\n", nwhite, nother);
//}
//

/*Write a program to print a histogram of the frequency of different characters in its input*/
//int main(){
//	int c, i, nwhite, nother;
//	nwhite = nother = 0;
//	int array[10];
//
//	for (int i = 0; i < 10; ++i)
//		array[i] = 0;
//
//	while ((c = getchar()) != EOF) {
//
//		if (c >= '0' && c <= '9') 
//			array[c - '0']++;
//		else if (c == ' ' || c == '\n' || c == '\t') {
//			++nwhite;
//		}
//		else {
//			++nother;
//		}
//
//	}
//	
//	for (i = 0; i < 10; ++i)
//		printf("'%d': ", i);
//	for (int j = 0; j < array[i]; ++j)
//		printf("*");
//	printf("\n");
//	
//
//	return 0;
//}
