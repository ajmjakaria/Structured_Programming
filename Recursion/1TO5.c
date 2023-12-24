///Recursion to print 1 to 10
#include <stdio.h>

// Function declaration
void printNumbers(int n);

int main() {
    printNumbers(1); // Start from number 1
    return 0;
}

// Function to print numbers using recursion
void printNumbers(int n) {
    if (n <= 5) {
        printf("%d\n", n);
        printNumbers(n + 1); // Recursive call with incremented value
       // printf("%d\n", n);
    }
}
