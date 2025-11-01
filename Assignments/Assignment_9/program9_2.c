#include<stdio.h>

/////////////////////////////////////////
//
//  Function Name : DollarToINR
//  Description :   It is used to convert US Doller into its corresponding value in Indian currency.
//  Input :         Int
//  Output :        Int
//  Author :        Aishwarya Santosh Kadam
//  Date :          31/10/2025
//
/////////////////////////////////////////

int DollarToINR(int iNo)
{
    int product = 70;

    product = product * iNo;

    return product;
}

////////////////////////////////////////////////
//
//  Entry Point Function of the Application
//
//////////////////////////////////////////////// 

int main()
{
    int iValue = 0, iRet =0;

    printf("Enter number of USD : ");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);

    printf("Value in INR is %d ",iRet);

    return 0;
}

//Time Complexity = O(1)