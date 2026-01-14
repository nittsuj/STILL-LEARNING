#include <stdio.h> // header library for input & output

int main() {
	// to print "Hello, World!" with the
	// '\n' representing new character
	printf("Hello, World!\n");
	
	//%d format specifier for integer
	//%f format specifier for float
	//%c format specifier for character
	//%s format specifier for strings
	
	// VARIABLE (int, float, char): named piece of memory used to store data & access when required
	char name[14] = "Bilbo Baggins";
	int age = 5;

	printf("Your name: %s\n", name);
	printf("Your age: %d\n", age);
	
	return 0;	// program executed successfully
}
