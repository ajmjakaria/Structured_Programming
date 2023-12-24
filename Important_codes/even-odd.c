///Check a number is odd or even
#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if(n % 2 == 0)
        printf("EVEN\n");
    else
        printf("ODD\n");
    return 0;
}
