#include<stdio.h>

/////////////////////////////////////////
//
//  Function Name : CheckNumberType
//  Description :   It is used to check the number is positive , negative or zero
//  Input :         Int
//  Output :        void
//  Author :        Aishwarya Santosh Kadam
//  Date :          31/10/2025
//
/////////////////////////////////////////

void CheckNumberType(int num)
{
    if(num>0)
    {
        printf("The number is positive");
    }
    else if(num<0)
    {
        printf("The number is negative");
    }
    else
    {
        printf("The number is zero");
    }
}

////////////////////////////////////////////////
//
//  Entry Point Function of the Application
//
//////////////////////////////////////////////// 

int main()
{
    int number = 0;
    printf("Enter number : ");
    scanf("%d",&number);

    CheckNumberType(number);

    return 0;
}