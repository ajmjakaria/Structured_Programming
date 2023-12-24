#include <stdio.h>
void swap(int *x, int *y)
{
    *x = *x + *y;
    *y = *x - *y;
    *x = *x - *y;

    //++*x, *y += 50;

}
int main()
{
    int a = 10, b = 20;
    //scanf("%d%d", &a, &b);
    printf("Before swapping: a = %d, b = %d\n", a, b);
    swap(&a, &b);
    printf("After swapping: a = %b, b = %d\n", a, b);

    return 0;
}
