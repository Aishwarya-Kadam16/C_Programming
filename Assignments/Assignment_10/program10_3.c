#include<stdio.h>

/////////////////////////////////////////
//
//  Function Name : KMtoMeter
//  Description :   It is used to convert distance kilometer into meter
//  Input :         Int
//  Output :        Int
//  Author :        Aishwarya Santosh Kadam
//  Date :          31/10/2025
//
/////////////////////////////////////////

int KMtoMeter(int iNo)
{
    int Kmeter =1000;

    Kmeter = Kmeter * iNo;

    return Kmeter;
}

////////////////////////////////////////////////
//
//  Entry Point Function of the Application
//
//////////////////////////////////////////////// 

int main()
{
    int iValue = 0, iRet =0;

    printf("Enter Distance : ");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);

    printf("Distance in Meter is %d ",iRet);

    return 0;
}