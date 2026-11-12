#include <stdio.h>

/**
 * main - Simple calculator with addition
 *
 * Return: Always 0
 */
int main(void)
{
    int choice;
    int a, b;

    while (1)
    {
        printf("Simple Calculator\n");
        printf("1) Add\n");
        printf("2) Subtract\n");
        printf("3) Multiply\n");
        printf("4) Divide\n");
        printf("0) Quit\n");
        printf("Choice: ");

        if (scanf("%d", &choice) != 1)
            break;

        if (choice == 0)
        {
            printf("Bye!\n");
            break;
        }

        if (choice < 0 || choice > 4)
        {
            printf("Invalid choice\n");
            continue;
        }

        if (choice == 1)
        {
            printf("A: ");
            if (scanf("%d", &a) != 1)
                break;

            printf("B: ");
            if (scanf("%d", &b) != 1)
                break;

            printf("Result: %d\n", a + b);
        }
    }

    return (0);
}
