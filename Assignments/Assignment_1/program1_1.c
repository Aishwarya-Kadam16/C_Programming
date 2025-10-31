#include<stdio.h>

/////////////////////////////////////////
//
//  Function Name : Divide
//  Description :   It is used to print division of two numbers
//  Input :         Int , Int
//  Output :        Int
//  Author :        Aishwarya Santosh Kadam
//  Date :          31/10/2025
//
/////////////////////////////////////////

int Divide(int iNo1 , int iNo2)
{
    int iAns = 0;
    if(iNo2>iNo1)
    {
        return -1;
    }

    iAns = iNo1 / iNo2;
    return iAns;
}

////////////////////////////////////////////////
//
//  Entry Point Function of the Application
//
//////////////////////////////////////////////// 

int main()
{
    int iValue1=15 , iValue2 = 5;
    int iRet =0;

    iRet = Divide(iValue1 , iValue2);

    printf("Division is %d", iRet);

    return 0;

}

