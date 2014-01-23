/* 	Scanf & Printf
	Description : multiply user input by 2 and prints the result to the screen
	By : Mathieu Grenier
*/
#include<stdio.h> // include header stdio. h
	int a; // declare a as integer number
void mult()
{
a = a * 2; // multiply a by 2 and stores it in a
}

void awnser()
{
	printf("The awnser is %d\n",a); //prints The awnser is (value of a) to the screen
}

int main() // declare main function
{
	scanf("%d",&a); //wait for user input and stores it in a
	mult();
	awnser();
return 0; // function should always return 0 at the end
}
