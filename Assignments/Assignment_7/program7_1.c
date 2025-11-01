#include<stdio.h>

/////////////////////////////////////////
//
//  Function Name : Pattern
//  Description :   It is used to print number of $ & * on the screen
//  Input :         Int
//  Output :        void
//  Author :        Aishwarya Santosh Kadam
//  Date :          31/10/2025
//
/////////////////////////////////////////

void Pattern(int iNo)
{

    if(iNo<0)
    {
        iNo = -iNo;
    }
    int iCnt = 0;

    for(iCnt =1;iCnt<=iNo;iCnt++)
    {
        printf("$\t*\t",iCnt);
    }
}

////////////////////////////////////////////////
//
//  Entry Point Function of the Application
//
////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}


//Time Complexity = O(n)