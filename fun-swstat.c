/*	Switch statement
	Description : Using a switch statement to check conditions
	By Mathieu Grenier
*/

#include<stdio.h> // include header stdio.h
	char fruit; // declare fruit as character

void swca()
{
		switch (fruit) // Switch statement, basically another kind of if statement
			{ // open { to start case
				case 'a': // if user input a
					printf("You like Apples\n");
				break; // end if
				case 'b': // if user input b
					printf("You like Bananas\n");
				break; // end if
				case 'c': // if user input c
					printf("You like Cherries\n");
				break; // end if
			} // close } to end case
}

void ask()
{
	printf("Which one is your favorite fruit :\n");
	printf("a) Apples\n");
	printf("b) Bananas\n");
	printf("c) Cherries\n");
}

int main() // declare main function
{
	ask();
	scanf("%c",&fruit); // wait for user char input and stores it in fruit
	swca();
return 0; // functions should always return 0 at the end
}
