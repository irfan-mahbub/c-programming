#include <stdio.h>
int main()
{
    int x = 5, y = 1;
    while (y <= 10)
    {
        printf("%d X %d = %d\n", x,y,x*y);
        y++;
    }
    return 0;
}
