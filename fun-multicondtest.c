/*	Multi-conditions test
	Description : Ask user to input 2 numbers and prints the results of some  conditions checks
	By Mathieu Grenier
*/

#include<stdio.h> // include header stdio.h
	int a,b; // declare a, b as integer numbers

void chkpos()
{
		if (a >= 0 && b >= 0) // check if both a and b are over or equals to 0
			printf("Both numbers are positive\n");
}

void chkeq0()
{
		if (a == 0 || b == 0) // check if a or b equals 0
			printf("At least 1 number is 0\n");
}

void chkeqov0()
{
		if (!(a >= 0) && !(b >= 0)) // check if both a and b are not over or equals to 0
			printf("Both numbers are negative\n");
}

void chksame()
{
		if (!(a == b) && !(b == a)) // check if both a and b are not the same
			printf("Those are some random numbers\n");
}

int main() // declare main function
{

	scanf("%d",&a); //wait for user input and stores it in a
	scanf("%d",&b); //wait for user input and stores it in b
	chkpos();
	chkeq0();
	chkeqov0();
	chksame();
return 0; // function should always return 0 at the end
}
