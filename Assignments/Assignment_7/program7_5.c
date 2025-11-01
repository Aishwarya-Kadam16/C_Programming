#include<stdio.h>

/////////////////////////////////////////
//
//  Function Name : MultipleDisplay
//  Description :   It is used to print first 5 multiples of N
//  Input :         Int
//  Output :        void
//  Author :        Aishwarya Santosh Kadam
//  Date :          31/10/2025
//
/////////////////////////////////////////

void MultipleDisplay(int iNo)
{
    int iCnt = 0;
    int product = 0;

    for(iCnt = iNo; iCnt<=iNo*5; iCnt++)
    {
        if((iCnt%iNo)==0)
        {
            printf("%d\t",iCnt);
        }
        
        
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

    MultipleDisplay(iValue);

    return 0;
}

//Time Complexity = O(n)