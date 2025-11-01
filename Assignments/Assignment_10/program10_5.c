#include<stdio.h>

/////////////////////////////////////////
//
//  Function Name : SquareMeter
//  Description :   It is used to convert square feet into square meter
//  Input :         Int
//  Output :        Double
//  Author :        Aishwarya Santosh Kadam
//  Date :          31/10/2025
//
/////////////////////////////////////////

double SquareMeter(int iValue)
{
    float SMeter = 0.0929;

    SMeter = SMeter * iValue;

    return SMeter;
}

////////////////////////////////////////////////
//
//  Entry Point Function of the Application
//
//////////////////////////////////////////////// 

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in square feet : ");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);

    printf("Area in Square meter %f",dRet);

    return 0;
}

//Time Complexity = O(1) 
