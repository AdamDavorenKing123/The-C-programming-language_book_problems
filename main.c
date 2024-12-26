# include <stdio.h>

//int main() {
//	printf("Hello World\n");
//}

///////////////////////////////////////////////////////////  Fahrenheit to Celsius Conversion Program
//int main(){
// /*print fahrenheit-celsius conversion table
// for fahr = 0,20,....,300;
// */
//	int lower, upper, step;
//	int fahr, celsius;
//
//	lower = 0;      // lower limit of temp scale
//	upper = 300;    // upper limit of temp scale
//	step = 20;      //  step size
//	
//	fahr = lower;
//
//		while (fahr <= upper){
//			celsius = 5 * (fahr - 32) / 9;
//			printf("%3d\t%6d\n", fahr, celsius);  //adding the 3 and 6 here for right justification
//			fahr = fahr + step;
//		}
//	return 0;
//}
//// ERROR - I used 5/9 in the calculation, but in C integer division truncates, here 5/9 is truncated to zero
///////////// VERSION-2 using float for more accurate temp values
//int main() {
//	/*print fahrenheit-celsius conversion table
//	for fahr = 0,20,....,300;
//	*/
//  float lower, upper, step;
//	float fahr, celsius;
//
//	lower = 0;      // lower limit of temp scale
//	upper = 300;    // upper limit of temp scale
//	step = 20;      //  step size
//
//	fahr = lower;
//
//	while (fahr <= upper) {
//		celsius = 5.0 * (fahr - 32.0) / 9.0;   //note: we can use 5.0/9.0 here as floats don't truncate to zero, .ie can be divided
//		printf("%3.0f\t%6.2f\n", fahr, celsius);  //adding the 3 and 6 here for right justification
//		fahr = fahr + step;
//	}
//	return 0;
//}

////VERSION 3 - using a for loop
//int main() {
//	int fahr;
//	for (fahr = 0; fahr <= 300; fahr+=20) {
//	    printf("%3d %6.2f\n", fahr, (5.0 / 9.0) * ((fahr)-32));
//	}
//
//}

/////////////  Symbolic Constants
//
//#define LOWER 0  //lower limit of table
//#define UPPER 300 //upper limit
//#define STEP 20   //step size
///// <summary>
///// ///////LESSON- MACROS (ABOVE DON'T NEED SEMICOLON (;)
///// </summary>
//main() {
//	int fahr;
//	for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
//		printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * ((fahr)-32));
//}

////*Read a character
//while (character is not an EOF end of File indicator
//output the charater you just read
//read a character*/
////*Copy input to output*/
//main() {
//	int c;
//	c = getchar();
//	while (c != EOF) {
//		putchar(c);
//		c = getchar();
//	}
//}

////Version 2
//main() {
//	int c;
//	while ((c = getchar()) != EOF) {
//		putchar(c);
//	}
//}
/*Count characters in input*/

//main() {
//	double nc;
//	for (nc = 0; getchar() != EOF; ++nc)
//		;
//	printf("\n%.0f\n", nc - 1); //-1 to exclude counting enter
//}
//Lesson: Program wasn't outputting what I wanted turns out you need to input ctrl Z to input an end-of-file
//        then enter is also counted eg. Hello would be counted as 6 as the enter is also counted

/*Count lines in input*/
//main() {
//    int c, nl;
//    nl = 0;
//    while ((c = getchar()) != EOF) 
//        if (c == '\n')
//            ++nl;
//    
//    printf("%d\n", nl);
//}

/*Write a program to count blanks, tabs and newlines*/

//main() {
//	int c, nl, bl, tb;
//	nl = 0;
//	tb = 0;
//	bl = 0;
//	while ((c = getchar()) != EOF)
//		if(c == '\n')
//			++nl;
//	    else if(c == '\t')
//			++tb;
//		else if(c == ' ')
//			++bl;
//	printf("Newlines: %d\nTabs: %d\nBlanks: %d\n", nl, tb, bl);
//
//}

/*Write a program to copy its input to output, 
replacing each string of one or more blanks with a single blank */

//int main() {
//    int c, pc;  // 'c' = current character, 'pc' = previous character
//    pc = EOF;   // Initialize previous character to EOF
//
//    // Process input one character at a time
//    while ((c = getchar()) != EOF) {
//        if (c != ' ') {         // If the current character is not a space
//            putchar(c);         // Output the character
//        }
//        else if (pc != ' ') { // If it is a space and previous character is NOT a space
//            putchar(c);         // Output a single space
//        }
//        pc = c;                 // Update previous character
//    }
//
//    return 0;
//}

/*Write a program to copy its input to output,
replace each tab with \t each space with \b and each backslash with \\   */

//main() {
//    int c;
//    
//    while ((c = getchar()) != EOF)
//        if (c == ' ')
//            printf("\\b");
//        else if (c == '\t')
//            printf("\\t");
//        else if (c == '\\')
//            printf("\\\\");
//        else    
//            putchar(c);
//}

//Program that outputs its input one word at a time
//main() {
//	int c, state;
//	
//	while ((c = getchar()) != EOF)
//		if (c == ' ' || c == '\n' || c == '\t')
//			printf("\n");
//		else{
//			putchar(c);
//		}
//}
