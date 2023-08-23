#include <stdio.h>
#include <string.h>

void copy_alphabetical_characters(char *ptr_string1, char *ptr_string2) {
    int j = 0;
    for (int i = 0; i < strlen(ptr_string1); i++) {
        if (('A' <= *(ptr_string1 + i) && *(ptr_string1 + i) <= 'Z') ||
            ('a' <= *(ptr_string1 + i) && *(ptr_string1 + i) <= 'z')) {
            *(ptr_string2 + j) = *(ptr_string1 + i);
            j++;
        }
    }
    ptr_string2[j] = '\0'; // Terminate the new string
}


short int isPalindrome(char *ptr_string2){
    int n = strlen(ptr_string2)-1;

    for(int i=0; i <= n/2 ; ++i){
        printf("%c%c\n", *(ptr_string2+i),*(ptr_string2+n-i));
        if (*(ptr_string2 + i) != *(ptr_string2 +n - i)){
            return 0;
        }
    }
    return 1;
}


int main() {
    char my_string[100], my_string2[100];

    puts("Enter a string: ");
    scanf(" %[^\n]", my_string);

    copy_alphabetical_characters(my_string, my_string2);
    printf("The alphabetical characters of your sentence are:\n %s\n", my_string2);

     printf("%d", isPalindrome(my_string2));

    return 0;
}
