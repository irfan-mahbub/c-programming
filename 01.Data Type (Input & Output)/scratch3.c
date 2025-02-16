#include <stdio.h>
int main()
{
    int num1 , num2 , value;
    char sign;
    printf("PLEASE ENTER A NUMBER : ");
    scanf("%d", &num1);
    printf("PLEASE ENTER ANOTHER NUMBER : ");
    scanf("%d", &num2);
    value = num1 + num2;
    sign = '+';
    printf("%d %c %d = %d\n", num1,sign,num2,value);
    value = num1 - num2;
    sign = '-';
    printf("%d %c %d = %d\n", num1,sign,num2,value);
    value = num1 * num2;
    sign = '*';
    printf("%d %c %d = %d\n", num1,sign,num2,value);
    value = num1 / num2;
    sign = '/';
    printf("%d %c %d = %d\n", num1,sign,num2,value);
    return 0;
}
