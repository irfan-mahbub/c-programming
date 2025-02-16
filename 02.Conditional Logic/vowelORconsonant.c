#include <stdio.h>
int main ()
{
    char letter;
    printf("Type a letter : ");
    scanf("%c", &letter);
    if (letter =='a' || letter =='e' || letter =='i' || letter =='o' || letter =='u')
    {
        printf("%c is a vowel\n", letter);
    }
    else
    {
        printf("%c is a consonant\n", letter);
    }
    return 0;
}
