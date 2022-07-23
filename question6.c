#include <stdio.h>
int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            if (j >= i)
                printf("* ");
            else
                printf("  ");
        }
        for (int j = 1; j <= 4; j++)
        {
            if (j <= 5 - i)
                printf("* ");
        }
        printf("\n");
    }
    return 0;
}