#include <stdio.h> // header library for input & output

int main() {	
	//%d format specifier for integer
	//%f format specifier for float
	//%c format specifier for character
	//%s format specifier for strings
	
	// VARIABLE (int, float, char): named piece of memory used to store data & access when required
	char name[14];	// array: an ordered collections of items of the same type,
			// accessed by numerical index (starting from zero)
	int age = 5;

	// & (ampersand) is will be the memory address for that assigned variable;
	printf("What is your name: ");
	scanf("%[^\n]", &name);
	// the [^\n] is an escape sequence representing newline character
	// you cannot use a regular %s or %c when inputting a spaced line of character
	// for instances, "John Pork"
	printf("What is your age: ");
	scanf("%d", &age);
	
	printf("\n");
	printf("Your name: %s\n", name);
	printf("Your age: %d\n", age);
	
	printf("\n");
	

	printf("\n");
	return 0;	// program executed successfully
}
