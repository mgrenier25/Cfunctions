/*	Arrays
	By Mathieu Grenier
	Description : Using integer arrays
*/

#include<stdio.h> // include header stdio.h
	int r1,r2,r3;
	int i; // declare i as integer number
	int b;
	int a[5]; // declare an array of 5 integers in a

void set()
{
	r1=rand() % 4;
	r2=rand() % 4;
	r3=rand() % 4;
	a[0] = 12; // sets the value of a[0] to 12
	a[1] = 23; // sets the value of a[1] to 23
	a[2] = 34; // sets the value of a[2] to 34
	a[3] = 45; // sets the value of a[3] to 45
	a[4] = 56; // sets the value of a[4] to 56
}

void set2()
{
	i=0;
	b=4;
}

void set3()
{
	b=0;
	i=4;
}

void sameline()
{
	printf("%d %d %d %d %d %d %d %d\n\n", a[0], a[1], a[2], a[3], a[4], a[r1], a[r2], a[r3]); // prints the value of the whole a array to the screen, on the same line
}

void tab1()
{
	do // starts loop to print value from integer array a on different lines
	    {
	    printf("%d %d %d %d %d\n", a[i], a[b], a[r1], a[r2], a[r3]); // prints the value of the integer i from array a and escape to a new line
	    }
	while (r1=rand() % 4,r2=rand() % 4,r3=rand() % 4,b--, i++, i <= 4, b >= 0); // run loop as long as integer i is less than or equals to 4
}

void tab2()
{
	do // starts loop to print value from integer array a on different lines
	    {
		printf("%d %d %d %d %d\n", a[i], a[b], a[r1], a[r2], a[r3]);
		}
		while (r1=rand() % 4,r2=rand() % 4,r3=rand() % 4,b++,i--, i >=0, b<=4);
}



int main() // declare main function
{
	set();
	printf("\n");
	sameline();
	set2();
	tab1();
	set3();
	printf("\n");
	tab2();

		return 0; // function should always return 0 at the end
}
