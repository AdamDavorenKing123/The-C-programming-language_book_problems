#include <stdio.h>

//#define MAXLINE 1000 //max input line length
//*********************************************************
//* pseuodcode representation                            *
//*														 *
//* while(there's another line)							 *
//*	if(it's longer than the prev longest)				 *
//*	  (save it)											 *
//*	  (save its length)									 *
//* print longest line									 *
//*********************************************************/
//
//int getline(char line[], int maxline);
//void copy(char to[], char from[]);
//
//// print the longest input line
//main()
//{
//	int len; //current line length
//	int max; // max length seen so far
//	char line[MAXLINE]; // current input line
//	char longest[MAXLINE]; // longest line saved here
//
//	max = 0;
//	while ((len = getline(line, MAXLINE)) > 0)
//		if (len > max) {
//			max = len;
//			copy(longest, line);
//		}
//	if (max > 0) //there was a line
//		printf("%s", longest);
//	else
//		printf("ERROR: NO LINE DETECTED.\nPLEASE INPUT LINE(S)\n");
//	return 0;
//}
//
//// getline: read a line into s, return length
//int getline(char s[], int lim)
//{
//	int c, i;
//	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n';++i)
//		s[i] = c;
//	if (c == '\n') {
//		s[i] = c;
//		++i;
//	}
//	s[i] = '\0';
//	return i;
//
//}
//// copy: copy 'from' into 'to'; assume to is big enough
//void copy(char to[], char from[])
//{
//	int i;
//	i = 0;
//	while ((to[i] = from[i]) != '\0')
//		++i;
//}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*	Excercise 1 - 16: revise the longest - line program so that it will print the length of arbitrarily long input lines
                                           and as much as possible of the text.
*/
//
//#define MAXLINE 10 // Maximum input line length, using 10 for demonstration purposes
//
//int mygetline(char line[], int maxline);
//void copy(char to[], char from[]);
//
//// Print the longest input line
//int main(void) {
//    int len;                // Current line length
//    int max;                // Maximum length seen so far
//    char line[MAXLINE];     // Current input line
//    char longest[MAXLINE];  // Longest line saved here
//
//    max = 0;
//    while ((len = mygetline(line, MAXLINE)) > 0) {
//        printf("Line length is %d and the line is: %s", len, line);
//        if (len > max) {
//            max = len;
//            copy(longest, line);
//        }
//    }
//
//    if (max > 0) { // There was at least one line
//        printf("\nLongest line is:\n%s", longest);
//        printf("Length of longest line: %d\n", max);
//    }
//    return 0;
//}
//
//// Read a line into s, return its length
//int mygetline(char s[], int lim) {
//    int c, i;
//
//    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
//        s[i] = c;
//    }
//
//    if (c == '\n') {
//        s[i] = c;
//        ++i;
//    }
//
//    s[i] = '\0'; // Null-terminate the string
//
//    // If line exceeds the buffer, continue counting characters until '\n' or EOF
//    if (i >= lim - 1 && c != '\n' && c != EOF) {
//        while ((c = getchar()) != EOF && c != '\n') {
//            ++i; // Keep counting the length
//        }
//        if (c == '\n') {
//            ++i; // Include the newline character
//        }
//    }
//
//    return i; // Return the total length of the line
//}
//
//// Copy 'from' into 'to'; assume 'to' is big enough
//void copy(char to[], char from[]) {
//    int i = 0;
//    while ((to[i] = from[i]) != '\0') {
//        ++i;
//    }
//}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/* Excercise 1-17: write a program to print all input lines that are longer than 80 characters
*/
//
//#define MAXLINE 1000 // Maximum input line length, using 10 for demonstration purposes
//#define LINELENGTH 80
//int mygetline(char line[], int maxline);
//
//int main(void) {
//    int len;                // Current line length
//    char line[MAXLINE];     // Current input line
//
//    while ((len = mygetline(line, MAXLINE)) > LINELENGTH) {
//        printf("%s", line);
//    }
//    return 0;
//}
//
//// Read a line into s, return its length
//int mygetline(char s[], int lim) {
//    int c, i;
//    int length = 0;
//
//    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
//        s[i] = c;
//    }
//
//    if (c == '\n') {
//        s[i] = c;
//        ++i;
//    }
//
//    s[i] = '\0'; // Null-terminate the string
//
//    // If line exceeds the buffer, continue counting characters until '\n' or EOF
//    if (i >= lim - 1 && c != '\n' && c != EOF) {
//        while ((c = getchar()) != EOF && c != '\n') {
//            ++i; // Keep counting the length
//        }
//        if (c == '\n') {
//            ++i; // Include the newline character
//        }
//    }
//
//    return i; // Return the total length of the line
//}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/* Excercise 1-18: Write a program to remove trailing blanks and tabs from each line of input and remove entirely any blank lines
*/
//#define MAXLINE 1000
//int mygetline(char s[], int lim);
//int removeTrailing(char s[], int lim);
//int main(void) {
//
//    char line[MAXLINE];
//    int length=0;
//
//    while ((length = mygetline(line, MAXLINE)) > 0) {
//        printf("The length before removing is %d\n", length);
//        if ((length = removeTrailing(line, MAXLINE)) > 0){
//            printf("%s", line);
//            printf("the new length is now %d\n", length);
//        }
//    }
//}
//int removeTrailing(char s[], int lim) {
//    int i = 0;
//    while (s[i] != '\n' && i < lim) {
//        ++i;        
//    }
//    if (i == lim) {
//        return i;
//    }
//    --i;
//    while (s[i] == ' ' || '\t' && i >= 0) {
//        --i;
//    }
//    if (i >= 0) {
//        ++i;
//        s[i] = '\n';
//        ++i;
//        s[i] = '\0';
//    }
//    return i;
//}
//
//int mygetline(char s[], int lim) {
//    int c, i;
//    int length = 0;
//    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i, ++length) {
//        s[i] = c;
//    }
//
//    if (c == '\n') {
//        s[i] = c;
//        ++i;
//        ++length;
//    }
//    else if (i >= lim - 1) {
//        int j;
//        while ((j = getchar()) != EOF) {
//            ++length;
//        }
//        if (j == '\n') {
//            ++length;
//        }
//    }
//    s[i] = '\0';
//    return length;
//}
//
// ///////////////////////////////////////Reverse program
//#define MAXLINE 1000
//int myGetLine(char s[], int lim);
//void reverse(char s[]);
//
//int main(void) {
//    char line[MAXLINE];
//
//    while (myGetLine(line, MAXLINE) > 0) {
//        reverse(line);
//        printf("%s", line);
//    }
//}
//
//int myGetLine(char s[], int lim) {
//    int i, c;
//    int length = 0;
//    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i, ++length) {
//        s[i] = c;
//    }
//    if (c == '\n') {
//        s[i] = c;
//        i++;
//        length++;
//    }
//    else if (i >= lim - 1) {
//        int j;
//        while ((j = getchar()) != EOF) {
//            ++length;
//        }
//    }
//    s[i] = '\0';
//    return length;
//}
//
//void reverse(char s[]) {
//    int i = 0;
//    int j = 0;
//
//    while (s[j] != '\0') {
//        j++;
//    }
//    --j;
//    if (s[j] == '\n') {
//        --j;
//    }
//    char temp;
//    while (i < j) {
//        temp = s[i];       
//        s[i] = s[j];
//        s[j] = temp;
//        --j;
//        ++i;
//    }
//   
//}
