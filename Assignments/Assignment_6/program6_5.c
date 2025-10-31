#include<stdio.h>

/////////////////////////////////////////
//
//  Function Name : Percentage
//  Description :   It is used to calculate percentage
//  Input :         Int , Int
//  Output :        Int
//  Author :        Aishwarya Santosh Kadam
//  Date :          31/10/2025
//
/////////////////////////////////////////

int Percentage(int iNo1 , int iNo2)
{
    int per = 0;

    per = iNo2*100;

    per = per/iNo1;

    return per;
}

////////////////////////////////////////////////
//
//  Entry Point Function of the Application
//
////////////////////////////////////////////////

int main()
{
    int iValue1 =0 , iValue2 =0;
    float fRet = 0.0f;

    printf("Please enter total marks");
    scanf("%d",&iValue1);

    printf("Please enter obtained marks");
    scanf("%d",&iValue2);

    fRet=Percentage(iValue1,iValue2);

    printf("The Percentage is : %f ",fRet);

    return 0;
}

//Time Complexity = O(1)