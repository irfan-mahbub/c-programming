#include <stdio.h>
int main()
{
    int num1 , num2 ;
    printf("PLEASE ENTER A NUMBER : ");
    scanf("%d", &num1);
    printf("PLEASE ENTER ANOTHER NUMBER : ");
    scanf("%d", &num2);
    printf("%d + %d = %d\n", num1,num2,num1+num2);
    printf("%d - %d = %d\n", num1,num2,num1-num2);
    printf("%d * %d = %d\n", num1,num2,num1*num2);
    printf("%d / %d = %d\n", num1,num2,num1/num2);
    return 0;
}
