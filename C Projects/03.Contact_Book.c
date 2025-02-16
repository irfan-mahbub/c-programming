#include <stdio.h>
int main()
{
    char n[50], na[50], add[100], addr[100];
    int a, ag;
    double p, ph;
    char d[15], da[15];

    printf("WELCOME TO PHONE BOOK\n\n");
    printf("MENU\n");
    printf("Press 1 to add the contact\n\n");

    int x;
    printf("Enter: ");
    scanf("%d", &x);

    if (x == 1)
    {
        int y;
        printf("Enter the number of contacts to be added: ");
        scanf("%d", &y);

        if (y >= 1)
        {
            printf("----------------\n");
            printf("Name: ");
            scanf("%s", n);
            printf("Age: ");
            scanf("%d", &a);
            printf("Phone Number: ");
            scanf("%lld", &p);
            printf("Date Of Birth: ");
            scanf("%s", d);
            printf("Address: ");
            scanf(" %[^\n]", add);
            printf("--------------------\n");
        }

        if (y == 2)
        {
            printf("----------------\n");
            printf("Name: ");
            scanf("%s", na);
            printf("Age: ");
            scanf("%d", &ag);
            printf("Phone Number: ");
            scanf("%lld", &ph);
            printf("Date Of Birth: ");
            scanf("%s", da);
            printf("Address: ");
            scanf(" %[^\n]", addr);
            printf("--------------------\n");
        }

        printf("Press 2 to see the entered contact\n");
        printf("Press 3 to exit the phone book\n");

        int z;
        printf("Enter: ");
        scanf("%d", &z);

        if (z == 2)
        {
            int num;
            printf("Enter the number of contacts to be viewed: ");
            scanf("%d", &num);

            if (num >= 1)
            {
                printf("----------------\n");
                printf("Name: %s\n", n);
                printf("Age: %d\n", a);
                printf("Phone Number: %lld\n", p);
                printf("Date Of Birth: %s\n", d);
                printf("Address: %s\n", add);
                printf("--------------------\n");
            }

            if (num == 2)
            {
                printf("----------------\n");
                printf("Name: %s\n", na);
                printf("Age: %d\n", ag);
                printf("Phone Number: %lld\n", ph);
                printf("Date Of Birth: %s\n", da);
                printf("Address: %s\n", addr);
                printf("--------------------\n");
            }
        }
        else if (z == 3)
        {
            printf("Are you sure you want to close the phone book?\n");
            printf("Press 1 for Yes\n");
            printf("Press 2 for No\n");

            int ans;
            printf("Enter: ");
            scanf("%d", &ans);

            if (ans == 1)
            {
                printf("The phone book has closed.\n");
                printf("Have a good day!\n");
            }
            else if (ans == 2)
            {
                printf("The phone book has not closed.\n");
                printf("You can continue.\n");
            }
        }
    }
    else
    {
        printf("Invalid Input\n");
    }

    return 0;
}
