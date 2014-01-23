/*	Initializing an array
	Description : Initializing an array using a loop	
	By Mathieu Grenier
*/

#include<stdio.h> // include header stdio.h
	int i; // declare i as integer
	int a[5]; // declare integer array a

void initloop()
{
	for (i = 0; i < 5; i++) // starts loop, sets i value to 0, run as long as i is less than 5, increment i by 1
	a[i] = 0; // sets the value of i from integer array a to 0
}

int main() // declare main function
{
	printf("%d %d %d %d %d\n", a[0], a[1], a[2], a[3], a[4]); // prints the values of the whole integer array a to the screen, on the same line
	initloop();
	printf("%d %d %d %d %d\n", a[0], a[1], a[2], a[3], a[4]); // prints the values of the whole integer array a to the screen, on the same line
return 0; // function should always return 0 at the end
}
