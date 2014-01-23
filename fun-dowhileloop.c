/* 	Do While Loops
	By Mathieu Grenier
	Description : Use a Do while loop to print an integer input from the user to the screen
*/

#include<stdio.h> // include header library stdio.h
	int i,times; // declare i and times as integer number
void loop()
{
	do // 
		{ // open { to start loop				
			printf("%i\n", i); // prints the value of integer i to the screen and escapes to a new line
			i++;
		} // close } to end loop
	while (!(i > times));
}

int main() // declare main function
{		
	scanf("%d", &times); // wait for user integer input and stores it in times
	i = 1; // sets the value of i to 1
	loop();
return 0; // functions should always return 0 at the end
}
