#include <stdio.h>
int main()
{
    char country[] = {'B','A','N','G','L','A','D','E','S','H','\0'};
    int i, length = 10;

    printf("%s\n", country);

    for(i = 0; i < length; i++)
    {
        if(country[i] >= 'A' && country[i] <= 'Z')
        {
            country[i] = 'a' + (country[i] - 'A');
        }
    }

    printf("%s\n", country);

    return 0;
}
