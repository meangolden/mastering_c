#include <stdio.h>

int  main(){
	puts("pointers are variables that store the\
	memory address of another variable.");
	puts("The use of the astering does two different things");
	puts("1. It is used for the declaration of the pointer");
	puts("2. It acts as a dereference operator.");
	puts("	I.e., it gets the value of the variable the address\
	of which it carries.");
	 
	int myAge = 38;
	char myName[] = "Chrys";
	int *ptr_age = &myAge;
	char *ptr_name = &myName[0];
	// char *ptr_name = myName; // I get the same as above
	
	printf("My age is %d\n", myAge);
	printf("My age is %d\n", *ptr_age); // same output as above
	
	printf("My age is stored at %p\n", &myAge);
	printf("My age is stored at %p\n", ptr_age); //same output as above
	printf("The second letter of my name is %c", *(ptr_name + 1));
	
	
return 0;
}