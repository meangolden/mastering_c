#include <stdio.h>
#include <string.h>

int main(){

    char my_string[]= "Hello World!";


    puts(my_string); // I guess puts automatically puts a new line at the end
    printf("The address of my string is: %p\n", &my_string);
    printf("The size of my string is: %zu\n", strlen(my_string));

    return 0;
}