#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void swap(char *x, char *y) {
    char temp = *x;
    *x = *y;
    *y = temp;
}

void generatePermutations(char *str, int start, int end, char **permutations, int *count) {
    if (start == end) {
        permutations[*count] = strdup(str); // Store the permutation
        (*count)++;
    } else {
        for (int i = start; i <= end; i++) {
            swap((str + start), (str + i));
            generatePermutations(str, start + 1, end, permutations, count);
            swap((str + start), (str + i)); // Backtrack
        }
    }
}

int main() {
    char input[100];
    
    printf("Enter a string: ");
    scanf("%s", input);
    
    int length = strlen(input);
    int numPermutations = 0;
    
    // Calculate the number of permutations (n!)
    for (int i = 1; i <= length; i++) {
        numPermutations *= i;
    }
    
    // Allocate memory for an array of pointers to store permutations
    char **permutations = (char **)malloc(numPermutations * sizeof(char *));
    
    generatePermutations(input, 0, length - 1, permutations, &numPermutations);
    
    // Print the stored permutations
    printf("Generated permutations:\n");
    for (int i = 0; i < numPermutations; i++) {
        printf("%s\n", permutations[i]);
        free(permutations[i]); // Free the memory allocated for each permutation
    }
    
    free(permutations); // Free the array of pointers
    
    return 0;
}
