#include<stdio.h>

/////////////////////////////////////////
//
//  Function Name : Accept
//  Description :   It is used to print number of * on the screen
//  Input :         Int
//  Output :        void
//  Author :        Aishwarya Santosh Kadam
//  Date :          31/10/2025
//
/////////////////////////////////////////

void Accept(int iNo)
{
    int iCnt = 0;

    for(iCnt=1;iCnt<=5;iCnt++)
    {
        printf("*");
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
    iValue = 5;

    Accept(iValue);
    return 0;

}
