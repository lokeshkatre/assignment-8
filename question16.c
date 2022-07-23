#include <stdio.h>
int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 9; j++)
        {
            if (j <= 5)
            {
                if (j >= 6 - i)
                {
                    if (i == 5 || j == 6 - i)
                        printf("*");
                    else
                        printf(" ");
                }
                else
                    printf(" ");
            }
            else
            {
                if (j <= i + 4)
                {
                    if (i == 5 || j == i + 4)
                        printf("*");
                    else
                        printf(" ");
                }
            }
        }
        printf("\n");
    }
    return 0;
}