///////////////////////////////////////////////////////////////////////////////////
//                              Required header files
///////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>       //Input / output
#include<stdbool.h>     //for Bool data type 

///////////////////////////////////////////////////////////////////////////////////
//  Function Name   :   CheckEvenOdd
//  Description     :   It is used to check input even or odd
//  Input           :   integer
//  Output          :   boolean
//  Date            :   9/10/2026
//  Author          :   Aishwarya Santosh Kadam
///////////////////////////////////////////////////////////////////////////////////
bool CheckEvenOdd(int iNo)
{
    int iRem = 0;
    iRem = iNo % 2;
    if(iRem == 0)
    {return true;}

    else
    {return false;}
}

///////////////////////////////////////////////////////////////////////////////////
//                  Entry point function of the application
///////////////////////////////////////////////////////////////////////////////////
int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    bRet = CheckEvenOdd(iValue);      //call by value

    if(bRet == true)
    {printf("%d is even number \n",iValue);}

    else
    {printf("%d is odd number \n",iValue);}
    return 0;
}
