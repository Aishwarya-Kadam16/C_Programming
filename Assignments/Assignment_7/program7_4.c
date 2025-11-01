#include<stdio.h>

/////////////////////////////////////////
//
//  Function Name : OddDisplay
//  Description :   It is used to accepting N from user print all odd numbers up to N
//  Input :         Int
//  Output :        void
//  Author :        Aishwarya Santosh Kadam
//  Date :          31/10/2025
//
/////////////////////////////////////////

void OddDisplay(int iNo)
{
    int iCnt = 0;

    for(iCnt =1;iCnt<=iNo;iCnt++)
    {
        if((iCnt%2)!=0)
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

    printf("Enter Number");
    scanf("%d",&iValue);

    OddDisplay(iValue);

    return 0;
}

//Time Complexity = O(n)