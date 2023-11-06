#include <stdio.h>

// Function declaration
int isEven(int num);

int main() {
    int number = 5;
    if (isEven(number)) {
        printf("%d is even.\n", number);
    } else {
        printf("%d is odd.\n", number);
    }
    return 0;
}

// Function definition
int isEven(int num) {
    return num % 2 == 0;
}
