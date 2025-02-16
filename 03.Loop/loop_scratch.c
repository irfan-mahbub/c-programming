#include <stdio.h>
int main()
{
    int x = 5, y = 1, z = 0;
    for (y=1; y<=10; y++)
    {
        z = z + x;
        printf("%d X %d = %d\n", x,y,z);
    }
    return 0;

}
