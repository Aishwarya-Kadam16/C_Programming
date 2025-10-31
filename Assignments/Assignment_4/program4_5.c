#include<stdio.h>

/////////////////////////////////////////
//
//  Function Name : FactDiff
//  Description :   It is used to return difference between summation of all its factors and non factors
//  Input :         Int
//  Output :        Int
//  Author :        Aishwarya Santosh Kadam
//  Date :          31/10/2025
//
/////////////////////////////////////////

int FactDiff(int iNo)
{
    int iCnt = 0;
    int iFrequency = 0;
    int iFrequency1 = 0;
    int iFrequ = 0;

    for(iCnt = 1; iCnt<=(iNo/2);iCnt++)
        {
            if((iNo%iCnt)==0)
            {
                
                iFrequency = iFrequency + iCnt;
                //printf("%d\t",iCnt);
                

            }
        
        }
        
    for(iCnt = 1; iCnt<=iNo;iCnt++)
        {
            if((iNo%iCnt)!=0)
            {
                //printf("%d\t",iCnt);
                iFrequency1 = iFrequency1 + iCnt;
            }
        }

        printf("%d\t",iFrequency);

        printf("%d",iFrequency1);

        iFrequ = iFrequency - iFrequency1;
    
    return iFrequ;
}
int main()
{
    int iValue = 0;
    int iRet =0;

    printf("Enter number");
    scanf("%d", &iValue);

    iRet = FactDiff(iValue);

    printf("\t=\t%d",iRet);


    return 0;

}
