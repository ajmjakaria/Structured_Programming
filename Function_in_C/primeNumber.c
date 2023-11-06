///Program to check a number is prime or not
#include<stdio.h>
#include<math.h>
#include<stdbool.h>

bool isPrime(int n)  //Function to check prime
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
    int n, t_case, i;
    scanf("%d", &t_case);
    for(i = 1; i <= t_case; i++){
    scanf("%d", &n);
    printf(isPrime(n) ? "Case %d: %d is a prime.\n" : "Case %d: %d is not a prime.\n", i, n);
    }
    return 0;
}

///SAMPLE I/0
/*
5
10 2 5 6 4
*/

/* Way 1:
   if(!isPrime(n)) //1
        printf("%d is not a prime.\n", n);
    else
        printf("%d is a prime.\n", n);*/
    //Way 2
    //(isPrime(n)) ? printf("%d is a prime.\n", n) : printf("%d is not a prime.\n", n);

    //Way 2
