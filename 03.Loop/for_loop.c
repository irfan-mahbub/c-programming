#include <stdio.h>
int main()
{
    int x = 5;
    int y;
    for (y=1; y<=10; y++)
    {
        printf("%d X %d = %d\n", x,y,x*y);
    }
    return 0;
}
