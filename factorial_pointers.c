/* Write a program in C to find the factorial of a given number using pointers.
Test Data :
Input a number : 5
Expected Output :

The Factorial of 5 is : 120 
*/

#include <stdio.h>
#include <stdlib.h>

int factorial(int *ptr){
	int result=1;
	if (*ptr == 0 || *ptr == 1){
		return 1;
	}else if (*ptr > 1){
		puts("hey!I'm running");
		for (int i = *ptr; i >0; i--){
			result *= i;
		}
		
		return result;
			}
	return 0;
}


int main(){
	int n;
	int *ptr_n = &n; 
	puts("Enter an integer between 1 and 10:\n");
	scanf("%d", ptr_n);
	
	printf("The factorial of %d is equal to: %d", *ptr_n, factorial(ptr_n));
	
	return 0;
}