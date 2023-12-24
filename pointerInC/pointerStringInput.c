//#include <stdio.h>
#include <stdio.h>

#define MAX_STRINGS 5 // Maximum number of strings
#define STRING_SIZE 256 // Maximum size of each string

int main() {
    char strings[MAX_STRINGS][STRING_SIZE]; // Array of strings
    int i;

    // Prompt the user to input strings
    printf("Enter %d strings, each not exceeding %d characters:\n", MAX_STRINGS, STRING_SIZE - 1);

    for (i = 0; i < MAX_STRINGS; i++) {
        printf("String %d: ", i + 1);
        fgets(strings[i], STRING_SIZE, stdin);

        // Remove the newline character if it's at the end of the string
        strings[i][strcspn(strings[i], "\n")] = 0;
    }

    // Display all the strings entered by the user
    printf("\nYou entered these strings:\n");
    for (i = 0; i < MAX_STRINGS; i++) {
        printf("String %d: %s\n", i + 1, strings[i]);
    }

    return 0;
}



/*
int main() {
    const int SIZE = 256;  // Define the maximum length of the string
    char str[SIZE];        // Declare a character array to hold the input
    char *ptr = str;       // Declare a pointer to the character array

    printf("Enter a string: ");
    // Use fgets to read a string from the user
    // It reads up to SIZE-1 characters to leave space for the null terminator
    fgets(ptr, SIZE, stdin);

    // Output the string entered by the user
    printf("You entered: %s", ptr);

    return 0;
}
*/
