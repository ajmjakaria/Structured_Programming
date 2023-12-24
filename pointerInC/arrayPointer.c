#include <stdio.h>

int main()
{
    int a[5] = {7, 5, 2, 3, 10};
    int *ptr = &a;
    int i;
    //printf("%d %d", ptr[0], ptr[1]);

    for(i = 0; i < 5; i++)
    {
       // printf("%d[%d]: a[%d] = %d\n", ptr+i, i, i, *(ptr+i));
       printf("%d ", &a[i]);//0+0, 0+1, 0+2, 0+3, 0+4
       //printf("%d ", ptr[i]); //ptr[0], ptr[1]
       //printf("%d ", *ptr++); //0, 1, 2, 3, 4
    }
    return 0;
}
