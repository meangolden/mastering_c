/**
Instructions: 
Write a program that will input 3 integer values from user and then will 
display the average of them. You would require to declare 3 integer variables 
for holding the integers given by the users from keyboard and then you need 
another variable for holding the average. Decide by yourself about the datatype 
of the average variable.

Finally print the average into console using printf.
*/
#include <stdio.h>

int main()
{
	int int1, int2, int3;
	double average;

	puts("Enter three integer values seperated by space: ");
	scanf("%d%d%d", &int1, &int2, &int3);

	average = (double) (int1+int2+int3)/3;

	printf("The average is equal to %lf", average);
	
	

	// complete the program as per instructions.


	return 0;
}