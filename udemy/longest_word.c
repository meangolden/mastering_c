#include <stdio.h>
#include <string.h>
/*
Instructions:
In this assignment, you will need to find the longest word in a string.
You can assume that,
        1. each word ends with a space or a NULL character (for the last word).
        2. There is only one space in between the words.
*/

int main(){
    // find the longest word in the string my_str
    
	char my_str[50];
	//char my_str[] = "In this programme we will find the longest word in a string";	
	printf("Enter a sentence with only alphabetical characters: ");

	scanf("%[^\n]", my_str);
	getchar(); // Consume the newline character

	int countWords = 1;
	for(int i = 0; i < strlen(my_str); i++)
		countWords += (my_str[i] == ' ');
	
	int indxFirstLetter[countWords], lengths[countWords][2];
	int	indxLastLetter[countWords];
	
	indxFirstLetter[0] = 0;
	indxLastLetter[countWords - 1] = strlen(my_str) - 1 ;
	
		
	for(int i = 0, j = 1; i < strlen(my_str); i++){
		if (my_str[i] == ' '){
			indxFirstLetter[j] = i + 1;
			indxLastLetter[j - 1] = i - 1; 
			j++;
		}
	}
	
	
	for(int i = 0; i < countWords; ++i){
		lengths[i][0] = i; // first entry holds the position of the word
		lengths[i][1] = indxLastLetter[i] - indxFirstLetter[i] + 1;
		/*
		printf("Word number %d occupies places from %d to %d\n",\
		i+1,indxFirstLetter[i],indxLastLetter[i]);
		printf("It has %d character(s). \n\n", lengths[i][1]);
		*/
	}		
	
	int maxLength = lengths[0][1], longestWordPosition = 1;
	for(int i = 1; i < countWords; ++i){
			if (lengths[i][1] > maxLength){
				maxLength = lengths[i][1];
				longestWordPosition = lengths[i][0];
			}
	}
	
	int k = indxFirstLetter[longestWordPosition], j = 0;
	char longestWord[lengths[k][1]];
	//char longestWord[20];
//	printf("k is equal to %d: \n", k);
	
	while (my_str[k]!= ' '){
		longestWord[j++] = my_str[k++];
		}
	
	printf("/n-------------------------------------------------\n");
	printf("The longest word in the sentence:\n \"%s\" ", my_str);
	printf("is word \"%s\" with a legnth of %d characters.\n", longestWord, maxLength);
	return 0;
}