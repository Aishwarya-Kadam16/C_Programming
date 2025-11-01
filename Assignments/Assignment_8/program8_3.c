#include<stdio.h>

/////////////////////////////////////////
//
//  Function Name : Factorial
//  Description :   It is used to find factorial of a given number
//  Input :         Int
//  Output :        Int
//  Author :        Aishwarya Santosh Kadam
//  Date :          31/10/2025
//
/////////////////////////////////////////

int Factorial(int iNo)
{
    
    int iCnt = 0;
    
    if(iNo<0)
    {
        iNo = -iNo;
    }

    int product = 1;
    for(iCnt =1; iCnt<=(iNo); iCnt++)
    {
            printf("%d\t",iCnt);
            
            product = product * iCnt;
        
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
    int iValue = 0, iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("\n");
    printf("Factorial of a number is %d ",iRet);

    return 0;
}

//Time Complexity = O(n)