/*	Variables and Constants
	Description : Using variables and constants
	By : Mathieu Grenier
*/
#include<stdio.h> // include header stdio.h

	int a, c; //declare a,c as integer number
	signed int d; //declare d as signed integer number
	unsigned int e; //declare e as unsigned integer number
	char b; // declare b as character
	const float pi = 3.14; //declare pi as a floating number constant

void result()
{
	 printf("%d\n",a); //prints the value of a
	printf("%lf\n",pi); //prints the value of pi
	printf("%c\n",b); //prints the value of b
	printf("%d\n",c); // prints the value of c
}
	
void calc()
{
	b = 'H'; //set the value of b to H
	c = a + 3; //add 3 to a and stores it in c
	a = a - 3; //substract 3 to a and stores it in a
}

int main() // declare main function
{
	a = 5; //set the value of a to 5
	printf("%d\n",a); //prints the value of a
	calc();
	result();
return 0;
}
