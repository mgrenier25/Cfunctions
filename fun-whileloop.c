/* 	While Loops
	Description : Prints user input to the screen using a while loop
	By Mathieu Grenier
*/

#include<stdio.h> // include header stdio.h
	int i, times; // declare i and times as integer numbers

void loop()
{
while (	printf("%d\n", i), i++, !(i > times)); // increment i by 1, run loop as long as i is less than or equals to times
}

int main() // declare main function
{
		scanf("%d", &times); // stores user input in times
	i = 0; // sets the value of i to 0
	loop();
return 0; // functions should always return 0 at the end
}
