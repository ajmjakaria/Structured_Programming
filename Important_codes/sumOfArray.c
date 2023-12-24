#include<stdio.h>
int main()
{
    int size;
    scanf("%d", &size);
    int ar1[size], sum = 0;

    printf("input ar1: ");
    for(int i = 0; i < size; i++){
        scanf("%d", &ar1[i]);
        sum += ar1[i];
    }
    printf("The sum is: %d\n", sum);
    return 0;
}
