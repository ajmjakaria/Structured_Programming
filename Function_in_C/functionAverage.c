#include<stdio.h>

float average(int x, int y) //Function to find average
{
    int s = sum(x, y);
    float av = (float)s/2;
    return av;

}

sum(int x, int y) //Function to find summation
{
    return x + y;
}

void result()
{
    int a, b;
    scanf("%d%d", &a, &b);
    float avg = average(a, b);       // Call average
    printf("The average is %.2f\n", avg);
}
int main(){

    result(); //Call result
    return 0;
}

