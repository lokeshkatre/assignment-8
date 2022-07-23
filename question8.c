#include <stdio.h>
int main()
{
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= 4; j++)
        {
            if (j >= 5 - i)
                printf("%d", i + j - 4);
            else
                printf(" ");
        }
        for (int j = 1; j <= 3; j++)
        {
            if (j < i)
                printf("%d", i - j);
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}