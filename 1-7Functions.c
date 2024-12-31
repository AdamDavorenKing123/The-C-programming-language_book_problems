#include <stdio.h>
/* Bro code vid */
/*
void birthday(char x[], int y)  //paramaters- note: these don't have to share the same name as args just same order and data type
{
	printf("\Happy birthday to you!");       //This is what get excecuted
	printf("\nHappy birthday dear %s", x);   //each time the function
	printf("\nYou are %d years old", y);     //is called.
}

int main() {
	
	char name[] = "Adam";
	int age = 19;
	birthday(name, age); //arguments

	return 0;
}
*/

/* Function prototypes */
/*
void hello(char[], int); // function prototype
// ensure that calls to a func are made with the correct args
int main()
{
char name[] = "Adam";
int age = 19;

hello(name, age); 
return 0;
}
void hello(char name[], int age)
{
	printf("\nHello %s", name);
	printf("\nYou are %d years old", age);
}
*/

/////*Convert temperature conversion program to use function*/
//int converter(int fahr, int lower, int upper, int step);

// Function to print Fahrenheit to Celsius table
//void fahrToC() {
//    int fahr; // Fahrenheit variable
//    for (fahr = 0; fahr <= 300; fahr += 20) {
//        float celsius = (5.0 / 9.0) * (fahr - 32);
//        printf("%3d °F = %6.2f °C\n", fahr, celsius);
//    }
//}
//
//int main() {
//    // Call the function to print the table
//    fahrToC();
//    return 0;
//}

//int sum(int a, int b)
//{
//	return a + b;
//}
//int main() {
//
//	int a = 30, b = 40;
//	int res = sum(a, b);
//	printf("The sum is %d", res);
//	return 0;
//}