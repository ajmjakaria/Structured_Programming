#include<stdio.h>

void printNto1(int n) {
    if (n < 1) return;  //Base case: if n is less than 1, return previous state

    printf("%d ", n);
    printNto1(n - 1);  //Recursive call with the next smaller number
}

int main()
{
    int n;
    scanf("%d", &n);
    printNto1(n);
    return 0;
}

