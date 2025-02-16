#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a Letter : ");
    scanf("%c", &ch);
    if (ch >= 'a' && ch <= 'z')
    {
        printf("%c is a lower case letter\n", ch);
    }
    if (ch >= 'A' && ch <= 'Z')
    {
        printf("%c is a upper case letter\n", ch);
    }
    return 0;
}
