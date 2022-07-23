#include <stdio.h>
int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 9; j++)
        {
            if (j <= 5)
            {
                if (j == i || i == 1)
                    printf("*");
                else
                    printf(" ");
            }
            else
            {
                if (j == 10- i || i == 1)
                    printf("*");
                else
                    printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}