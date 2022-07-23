#include<stdio.h>
int main()
{
    for (int i = 1; i <=4; i++)
    {
        for (int j = 1; j<=4; j++)
        {
            if(j>=i)
            printf("%c ",65+j-i);
            else 
            printf("  ");
        }
        for (int j = 1;j<=3 ; j++)
        {
            if(j<=4-i)
            printf("%c ",69-i-j);
            else
            printf("  ");
        }
        
        printf("\n");
        
    }
    
    return 0;
}