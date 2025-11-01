#include<stdio.h>

/////////////////////////////////////////
//
//  Function Name : Table
//  Description :   It is used to display table of the number
//  Input :         Int
//  Output :        void
//  Author :        Aishwarya Santosh Kadam
//  Date :          31/10/2025
//
/////////////////////////////////////////

void Table(int iNo)
{
    int iCnt =0;

    if(iNo<0)
    {
        iNo = -iNo;
    }
    
    for(iCnt = iNo; iCnt <= iNo*10; iCnt++)
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
    int iValue =0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    Table(iValue);

    return 0;
}