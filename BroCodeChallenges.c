/*Write a program to calculate the circumference of a circle*/
#include <stdio.h>
int main() {

	const double PI = 3.14159; //sets PI so that it cannot be altered later
	double radius, circumference, area;

	printf("\nPLEASE ENTENPUT RADIUS\n");
	scanf_s("%lf", &radius);

	circumference = 2 * PI * radius;
	printf("the cicumference of the cirlce of that radius is %lf\n", circumference);

	area = PI * radius * radius;
	printf("the area of the cirlce of that radius is %lf\n", area);


	return 0;
}
