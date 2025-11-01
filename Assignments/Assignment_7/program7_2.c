#include<stdio.h>

/////////////////////////////////////////
//
//  Function Name : Display
//  Description :   It is used to prints numbers till that number
//  Input :         Int
//  Output :        void
//  Author :        Aishwarya Santosh Kadam
//  Date :          31/10/2025
//
/////////////////////////////////////////

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt<=iNo; iCnt++)
    {
        printf("%d\t",iCnt);
    }
}

////////////////////////////////////////////////
//
//  Entry Point Function of the Application
//
////////////////////////////////////////////////

int main()
{
    int iValue =0;

    printf("Enter number ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}

//Time Complexity = O(n)