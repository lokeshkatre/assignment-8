#include <stdio.h>
int main()
{
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= 7; j++)
        {
            if (j <= 4)
            {
                if (j <= 5 - i)
                    printf("%d ", j);
                else
                    printf("  ");
            }
            else
            {
                if (i == 1)
                {
                    printf("3 2 1");
                    break;
                }
                else
                {
                    if (j >= i + 3)
                        printf("%d ", 8 - j);
                    else
                        printf("  ");
                }
            }
        }
        printf("\n");
    }
    return 0;
}