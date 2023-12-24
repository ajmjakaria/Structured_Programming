///check an integer is palindrome or not
#include<stdio.h>
int main()
{
    int num, rem=0, rev=0;
    scanf("%d", &num); //121
    int original_val = num;
    while(num > 0)
    {
        rem = num % 10; ///remainder
        rev = rev * 10 + rem;//10+2=12 120+1=121
        num /= 10; //0
    }
    if(original_val == rev)
    {
        printf("Palindrome\n");
    }
    else printf("Not Palindrome\n");
    return 0;
}
