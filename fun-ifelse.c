/*	If/Else
	Description : Using conditions, Simple did you pass test or not
	By Mathieu Grenier
*/

#include<stdio.h> //include header stdio.h
	int mark;
	char pass;

void check()
{ 
	if (mark > 50) // check if mark is over 50
		{
			pass = 'y'; //stores y in pass
			printf("Level up\n"); // prints Level up to the screen and escape to a new line
		}
	else // if mark is below 50
		{
			pass ='n'; //stores n in pass
			printf("Fail\n"); // prints Fail to the screen and escape to a new line
		}
}

int main() // declare main function
{
	scanf("%d",&mark); // wait for user input and stores it in mark
	check();
return 0; // function should always return 0 at the end
}
