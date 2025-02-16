#include <stdio.h>
int main()
{
    int n;
    int m;
    int a;
    int Exit;
    int Exi;

    printf("Welcome to Modern Periodic Table\n\n");

    printf("> Press 1 to know about an element\n");
    printf("> Press 2 to close the periodic table\n");

    printf("ENTER: ");
    scanf("%d", &n);

    if (n == 1)
    {
        printf("> Press 3 to search the element by atomic number\n");

        printf("ENTER: ");
        scanf("%d", &m);

        if (m == 3)
        {
            printf("Enter the atomic number of the element to be searched: ");
            scanf("%d", &a);

            if (a == 1)
            {
                printf("\nName: Hydrogen\n");
                printf("Symbol: H\n");
                printf("Atomic Number: 1\n");
                printf("Electronic Configuration: 1s^1\n");
                printf("Discovered By: Henry Cavendish\n");
                printf("Charge: +1\n");
            }
            else
            {
                printf("Element not found in this version of the program.\n");
            }
        }
    }
    else if (n == 2)
    {
        printf("Do you want to exit? (Yes/No)\n");
        printf("> Press 6 for Yes\n");
        printf("> Press 7 for No\n");

        printf("ENTER: ");
        scanf("%d", &Exit);

        if (Exit == 6)
        {
            printf("Are you sure you want to close the periodic table? (Yes/No)\n");
            printf("> Press 4 for Yes\n");
            printf("> Press 5 for No\n");

            printf("ENTER: ");
            scanf("%d", &Exi);  // Corrected the variable

            if (Exi == 4)
            {
                printf("The periodic table has closed.\n");
            }
            else if (Exi == 5)
            {
                printf("Periodic table has not closed, and you can continue to learn more about elements.\n");

                printf("Enter the atomic number of the element to be searched: ");
                scanf("%d", &a);

                if (a == 1)
                {
                    printf("\nName: Hydrogen\n");
                    printf("Symbol: H\n");
                    printf("Atomic Number: 1\n");
                    printf("Electronic Configuration: 1s^1\n");
                    printf("Discovered By: Henry Cavendish\n");
                    printf("Charge: +1\n");
                }
                else
                {
                    printf("Element not found in this version of the program.\n");
                }
            }
        }
        else if (Exit == 7)
        {
            printf("Periodic table has not closed, and you can continue to learn more about elements.\n");

            printf("Enter the atomic number of the element to be searched: ");
            scanf("%d", &a);

            if (a == 1)
            {
                printf("\nName: Hydrogen\n");
                printf("Symbol: H\n");
                printf("Atomic Number: 1\n");
                printf("Electronic Configuration: 1s^1\n");
                printf("Discovered By: Henry Cavendish\n");
                printf("Charge: +1\n");
            }
            else
            {
                printf("Element not found in this version of the program.\n");
            }
        }
    }

    return 0;
}
