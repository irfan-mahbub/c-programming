#include <stdio.h>
int main()
{
    int x = 1;
    while (x <= 100)
    {
        printf("%d\n",x);
        x++;
        if (x > 10)
        {
            break;
        }
    }
    return 0;
}

