//Print First N Fibonacci numbers
#include<stdio.h>
int fib(int n)
{
    if(n == 0) return 0;
    if(n == 1) return 1;
    return fib(n-1) + fib(n-2);
}

int main()
{
    int n;
    scanf("%d", &n);
    //printf("%dth Fibonacci number is %d\n",n, fib(n));
    printf("First %d Fibonacci series:\n", n);
    for(int i =0; i < n; i++)
    {
        printf("%d ", fib(i));
    }
}
