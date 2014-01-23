/* 	For Loops
	Description : Prints incrementials to the screen using for loop
	By Mathieu Grenier
*/

#include<stdio.h> // include header stdio.h
	int i; // declare i as integer number
void loop()
{
	for (i = 0;i <= 24;printf("%i\n",i)) // start loop to assign integer number to i from 0 to 24 and prints the result to the screen each time on a new line
	i++; //increment i by 1
}

int main() // declare main function
{
	loop();
	printf("\n%i\n", i); // escapes to a new line, prints the value of integer i and escape to a new line
return 0; // functions should always return 0 at the end
}
