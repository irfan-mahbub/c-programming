#include <stdio.h>
int main()
{
    int x, y, z;
    for (x=1; x<=20; x++)
    {
        z = 0;
        for (y=1; y<=10; y++)
        {
            z = z + x;
            printf("%d X %d = %d\n", x,y,z);
        }
        printf("\n");
    }
    return 0;
}
