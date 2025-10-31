#include<stdio.h>

/////////////////////////////////////////
//
//  Function Name : CheckEvenOdd
//  Description :   It is used to check even or odd
//  Input :         Int
//  Output :        void
//  Author :        Aishwarya Santosh Kadam
//  Date :          31/10/2025
//
/////////////////////////////////////////

void CheckEvenOdd(int num)
{
    if((num%2)==0)
    {
        printf("The number is Even");
    }
    else
    {
        printf("The number is odd");
    }
}

////////////////////////////////////////////////
//
//  Entry Point Function of the Application
//
////////////////////////////////////////////////

int main()
{
    int number;

    printf("Enter number : ");
    scanf("%d",&number);

    CheckEvenOdd(number);

    return 0;
}