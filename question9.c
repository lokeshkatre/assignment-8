#include <stdio.h>
int main()
{
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= 4; j++)
        {
            if (j >= i)
                printf("%d", j - i + 1);
            else
                printf(" ");
        }
        for (int j = 1; j <= 3; j++)
        {
            if (j <= 4 - i)
                printf("%d", 5 - i - j);
        }
        printf("\n");
    }
    return 0;
}