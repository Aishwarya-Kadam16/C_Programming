#include<stdio.h>
#include<stdbool.h>

/////////////////////////////////////////
//
//  Function Name : ChkEqual
//  Description :   It is used to check whether the numbers are equal or not
//  Input :         Int , Int
//  Output :        Int
//  Author :        Aishwarya Santosh Kadam
//  Date :          31/10/2025
//
/////////////////////////////////////////

int ChkEqual(int iNo1 , int iNo2)
{
    if(iNo1==iNo2)
    {
        return true;
    }
    else
    {
        return false;
    }
}

////////////////////////////////////////////////
//
//  Entry Point Function of the Application
//
//////////////////////////////////////////////// 

int main()
{
    int iValue1 = 0 , iValue2 = 0;
    bool bRet = false;

    printf("Please enter two numbers");
    scanf("%d\t%d",&iValue1,&iValue2);

    bRet = ChkEqual(iValue1,iValue2);

    if(bRet == true)
    {
        printf("Equal");
    }

    else
    {
        printf("Not Equal");
    }

    return 0;
}

//Time Complexity = O(1)