#include<stdio.h>

int main()
{
    int n;
    printf("Enter the the size of square: ");
    scanf("%d",&n);

    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= n; col++)
        {
            if ((row==1||row==n)||(col==1||col==n))
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
            
        }
        printf("\n");
    }
    
    return 0;
}
