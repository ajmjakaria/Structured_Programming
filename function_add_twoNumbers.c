///Program to add two numbers using function
#include <stdio.h>

int add(int a, int b) //Function definition
{
    return a + b;
}

int main() {
    int x, y, sum;
    scanf("%d%d", &x, &y); //Scan x, y
    sum = add(x, y);  //Function call with arguments x & y
    printf("Sum is: %d\n", sum);
    return 0;
}
