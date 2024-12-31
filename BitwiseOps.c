/*
#include <stdio.h>

int main() {

	int x = 6;  // 6 = 00000110
	int y = 12; //12 = 00001100
	int z = 0;  // 0 = 00000000

	z = x & y;  // 4 = 00000100 -look down the columns if both are 1 the 1 is placed

	z = x | y; // 14 = 00001110 -
	printf("OR = %d\n", z);

	z = x ^ y;  // 10 = 000001010
	printf("XOR = %d\n", z);

	z = x << 1; // left shift- bits are shifted to the left and zeros added to the right
	            // shifting to the left doubles 6->12->24->48->...
	printf("SHIFT LEFT = %d\n", z);

	z = x >> 1; //right shift- bits are shifted to the right and zeros added to the left
	            // shifting to the right halves

	return 0;
}
*/