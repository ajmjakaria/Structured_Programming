#include <stdio.h>
#include<string.h>

int  main()
{
    char *fruits[] = {"apple", "banana", "mango", "cherry"};
    int i;
   // for(i = 0; i < 10; i++)
     //  scanf("%s", &fruits[i]);

    //int size_fruits = sizeof(fruits)/sizeof(fruits[0]);
    int size_fruits = strlen(fruits[1]);

    printf("Size: %d\n", size_fruits);
    for(i = 0; i < size_fruits; i++)
        printf("%s ", fruits[i]);
    return 0;
}
