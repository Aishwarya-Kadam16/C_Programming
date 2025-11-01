#include<stdio.h>

/////////////////////////////////////////
//
//  Function Name : OddFactorial
//  Description :   It is used to find odd factorial of a given number
//  Input :         Int
//  Output :        Int
//  Author :        Aishwarya Santosh Kadam
//  Date :          31/10/2025
//
/////////////////////////////////////////

int OddFactorial(int iNo)
{
    int iCnt = 0;
    int product = 1;

    if(iNo<0)
    {
        iNo = -iNo;
    }
    

    for(iCnt = iNo;iCnt>=1; iCnt--)
    {
        if((iCnt%2)!=0)
        {
            printf("%d\t",iCnt);

            product = product * iCnt;
        }
    }   

    return product;
}

////////////////////////////////////////////////
//
//  Entry Point Function of the Application
//
//////////////////////////////////////////////// 

int main()
{
    int iValue = 0 , iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = OddFactorial(iValue);

    printf("\n");
    printf("Odd Factorial of number is %d ",iRet);

    return 0;
}

//Time Complexity = O(n)
