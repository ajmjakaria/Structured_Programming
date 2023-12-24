///Recursion to print 1 to 10
#include <stdio.h>

// Function declaration
void printNumbers(int n);

int main() {
    printNumbers(10); // Start from number 1
    printf("Hello\n");
    printf("Done\n");
    return 0;
}

// Function to print numbers using recursion
void printNumbers(int n) {
    if (n >= 1) {
        printNumbers(n - 1); // Recursive call with incremented value
        printf("%d\n", n);
    }
}

