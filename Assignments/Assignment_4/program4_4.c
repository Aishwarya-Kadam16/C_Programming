#include<stdio.h>

/////////////////////////////////////////
//
//  Function Name : SumNonFact
//  Description :   It is used to return summation of all non factors of a number
//  Input :         Int
//  Output :        Int
//  Author :        Aishwarya Santosh Kadam
//  Date :          31/10/2025
//
/////////////////////////////////////////

int SumNonFact(int iNo)
{
    int iCnt = 0;

    int iFrequency = 0;

    for(iCnt = 1; iCnt<(iNo);iCnt++)
    {
        if((iNo%iCnt)!=0)
        {
            printf("%d\t",iCnt);

            iFrequency = iFrequency + iCnt;
        }
    }
    return iFrequency;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    iRet = SumNonFact(iValue);

    printf(" = %d",iRet);

    return 0;
}