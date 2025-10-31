#include<stdio.h>

/////////////////////////////////////////
//
//  Function Name : MultFact
//  Description :   It is used to display multiplication of factors
//  Input :         Int
//  Output :        Int
//  Author :        Aishwarya Santosh Kadam
//  Date :          31/10/2025
//
/////////////////////////////////////////

int MultFact(int iNo)
{
    int iFrequency = 1;
    
    int iCnt = 0;

    for(iCnt =1; iCnt<=iNo/2; iCnt++)
    {
        if((iNo%iCnt)==0)
        {
            printf("%d",iCnt);

            iFrequency = iFrequency * iCnt;
  
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

    iRet = MultFact(iValue);

    printf(" = %d  ",iRet);


   

    return 0;
}