#include <stdio.h>
int main()
{
    int ara[]= {10,20,30,40,50,60,70,80,90,100};
    int x,y,temp;
    for(x=0,y=9; x<y; x++, y--)
    {
        temp=ara[y];
        ara[y]=ara[x];
        ara[x]=temp;
    }
    for(x=0; x<10; x++)
    {
        printf("%d\n", ara[x]);
    }
    return 0;
}
