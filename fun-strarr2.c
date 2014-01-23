/*	Pointers & String Arrays
	Description : Using pointers as reference to string array
	By Mathieu Grenier
*/

#include<stdio.h> // include header stdio.h
	char ca[10], *sp; // declare character array ca and character pointer sp

void disp()
{
	printf("%s\n", sp); // prints the value of character pointer sp to the screen and escape to a new line
}

void set()
{
	sp = ca; // sets the value of character array ca to character pointer sp
}

int main() // declare main function
{
	scanf("%s", ca); // wait for user input and stores it in character array ca
	set();
	disp();
return 0; // function should always return 0 at the end
}
