#include<stdio.h>

/////////////////////////////////////////
//
//  Function Name : EvenOddFactorial
//  Description :   It is used to find difference between even factorial and odd factorial of a given number
//  Input :         Int
//  Output :        Int
//  Author :        Aishwarya Santosh Kadam
//  Date :          31/10/2025
//
/////////////////////////////////////////

int EvenOddFactorial(int iNo)
{
    int iCnt = 0;
    int product = 1;
    int product1 = 1;
    int product111 = 0;

    if(iNo<0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt<=iNo; iCnt++)
    {
        if((iCnt%2)==0)
        {
            //printf("%d",iCnt);
            product = product * iCnt;
        }
        
    }
    for(iCnt = 1; iCnt<=iNo; iCnt++)
    {
        if((iCnt%2)!=0)
        {
            //printf("%d",iCnt);
            product1 = product1 * iCnt;
            
        }
    }

    printf("%d - ",product);
    printf("%d",product1);

    product111 = product - product1;

    return product111;
}

////////////////////////////////////////////////
//
//  Entry Point Function of the Application
//
//////////////////////////////////////////////// 

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    iRet = EvenOddFactorial(iValue);

    printf("\n");
    printf("The Difference is %d ",iRet);

    return 0;
}

//Time Complexity = O(n)
