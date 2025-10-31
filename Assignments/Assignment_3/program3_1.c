#include<stdio.h>

/////////////////////////////////////////
//
//  Function Name : PrintEven
//  Description :   It is used to print the even number
//  Input :         Int
//  Output :        Int
//  Author :        Aishwarya Santosh Kadam
//  Date :          31/10/2025
//
/////////////////////////////////////////

void PrintEven(int iNo)
{
    if(iNo <= 0)
    {
        return;
    }

    int iCnt = 0;
    
    for(iCnt = 1; iCnt <= iNo*2; iCnt++)
    {
        if(iCnt%2 ==0)
        {
            printf("%d",iCnt);
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

    printf("Enter number\n");
    scanf("%d",&iValue);

    PrintEven(iValue);

    return 0;
}