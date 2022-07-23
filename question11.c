#include<stdio.h>
int main()
{
    for (int i = 1; i <= 5; i++)
    {
       
        for (int j = 1; j<=5; j++)
        {
            if(i+j>=6)
            printf("%c ",59+i+j);
            else
            printf("  ");
        }
        for (int j = 2; j <=5; j++)
        {
            if(i>=j)
            printf("%c ",65+i-j);
        }
        
        printf("\n");
        
    }
    
    return 0;
}