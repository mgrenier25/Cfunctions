/* 	Continue
	By Mathieu Grenier
	Description : Using continue to restart a loop from the beginning
*/

#include<stdio.h> // include header stdio.h
	int i; // declare i as integer number
	
void loop()
{
	while (printf("%i\n",i), i < 10) // run loop as long as i is less than 10
		{
			i++; // increment i by 1 each time the loop is run
			continue; // restart the loop process from the beginning
			printf("Hello\n"); // Hello should never get printed to screen
		}
}

int main() // declare main function
{
 loop();
	printf ("%i\n", i); // prints the integer value of i
return 0; // fonctions should always return 0 at the end
}
