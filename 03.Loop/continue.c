#include <stdio.h>
int main()
{
    int x = 0;
    while (x < 10)
    {
        x = x + 1;
        if (x % 2 == 0)
        {
            continue;
        }
        printf ("%d\n", x);
    }
    return 0;
}
