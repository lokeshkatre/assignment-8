#include <stdio.h>
int main()
{
    for (int i = 1; i <= 9; i++)
    {
        for (int j = 1; j <= 9; j++)
        {
            if (i <= 5 && j >= 6 - i && j <= 5)
                printf("*");
            else if (i <= 5 && j <= i + 4 && j > 5)
                printf("*");
            else if (i > 5 && j >= i - 4 && j <= 5)
                printf("*");
            else if (i > 5 && j > 5 && j <= 14 - i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}