#include <stdio.h>
int main()
{
    int x = 5;
    int y = 1;
    for ( ; ; )
    {
        printf(" %d X %d = %d\n", x,y,x*y);
        y = y + 1;
        if (y>10)
        {
            break;
        }
    }
    return 0;
}
