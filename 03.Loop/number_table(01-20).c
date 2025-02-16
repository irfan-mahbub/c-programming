#include <stdio.h>
int main()
{
    int x,y;
    for (x=1; x<=20; x++)
    {
        for(y=1; y<=10; y++)
        {
            printf("%d X %d = %d\n", x,y,x*y);
        }
        printf("\n");
    }
    return 0;
}
