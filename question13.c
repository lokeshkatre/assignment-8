#include <stdio.h>
int main()
{
    for (int i = 1; i <= 7; i++)
    {
        for (int j = 1; j <= 13; j++)
        {
            if (j <= 7)
            {
                if (j <= 8 - i)
                    printf("%c ", 64+j);
                else
                    printf("  ");
            }
            else
            {
                if (i == 1)
                {
                    printf("F E D C B A");
                    break;
                }
                else
                {
                    if (j >= i + 6)
                        printf("%c ", 78 - j);
                    else
                        printf("  ");
                }
            }
        }
        printf("\n");
    }
    return 0;
}