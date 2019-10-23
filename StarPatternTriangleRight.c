// *********************************************************************
//  Author - Thomas Konnemann
//  Date :- 21th October 2019
//  Language :- C Language
//  About :- Star Pattern Triangle Right
//  *********************************************************************


//  //////////////////////////////////////////////////////////////////////
// *
// * *
// * * *
// * * * *
// * * * * *
// * * * *
// * * *
// * *
// *
//
//  //////////////////////////////////////////////////////////////////////


#include<stdio.h>

void main()
{
    int i,j,n;

    printf("Enter number of lines of * to be printed\n");
    scanf("%d", &n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(i=n;i>=1;i--)
    {
        for(j=1; j<i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
