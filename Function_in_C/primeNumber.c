///Program to check a number is prime or not
#include<stdio.h>

int isPrime(int n)  //Function to check prime
{
    if(n < 2) return 0;
    int i;
    for(i = 2; i <= sqrt(n); i++)
    {
        if(n % i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int n;
    scanf("%d", &n);
    int ret = isPrime(n); //Call Prime
    if(ret == 0)
        printf("%d is not a prime.\n", n);
    else
        printf("%d is a prime.\n", n);
    return 0;
}
