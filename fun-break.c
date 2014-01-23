/* 	Break
	By Mathieu Grenier
	Description : Using break in a while loop
*/

#include<stdio.h> // include header stdio.h
	int i; // declare i as an integer number

int brlo()
{
	return (i == 5); // check if the value of i equals 5
}

void loop()
{
	while (i < 10) // run loop as long as i is less than 10
	{	
		printf("%i\n", i);
		i++; // increment i by 1 each time the loop is run
		if (brlo())
		break;
	}
}

int main() // declare main function
{
	loop();
	printf ("%i\n", i); // prints the integer value of i to the screen
return 0; // function should always return 0 at the end
}

