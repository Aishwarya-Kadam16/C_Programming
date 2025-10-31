#include<stdio.h>

/////////////////////////////////////////
//
//  Function Name : FactRev
//  Description :   It is used to display the factors of a number in decreasing order
//  Input :         Int
//  Output :        void
//  Author :        Aishwarya Santosh Kadam
//  Date :          31/10/2025
//
/////////////////////////////////////////

void FactRev(int iNo)
{
    int iCnt = 0;

    for(iCnt = (iNo/2); iCnt>=1; iCnt--)
    {
        if((iNo%iCnt)==0)
        {
            printf("%d\t",iCnt);
        }
    }
}
int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    FactRev(iValue);

    return 0;
}