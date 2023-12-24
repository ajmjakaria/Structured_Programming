//Check an alphabet is vowel or consonant
#include<stdio.h>
int main()
{
    char ch;
    scanf("%c", &ch);
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        printf("Vowel\n");
    else if((ch > 'a' && ch < 'z') || (ch > 'A' && ch < 'Z'))
        printf("Consonant\n");
    else
        printf("Not an Alphabet\n");
    return 0;
}
