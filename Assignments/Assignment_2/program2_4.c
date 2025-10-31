#include<stdio.h>

/////////////////////////////////////////
//
//  Function Name : Display
//  Description :   It is used to display first number in second number of times
//  Input :         Int , Int
//  Output :        void
//  Author :        Aishwarya Santosh Kadam
//  Date :          31/10/2025
//
/////////////////////////////////////////

void Display(int iNo , int iFrequency)
{
    int Int = 0;

    if(iFrequency<0)
    {
        iFrequency = -iFrequency;
    }

    for(Int = 1; Int<=iFrequency ; Int++)
    {
        printf(" 12 ",iFrequency);
    }
}
int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter Number");
    scanf("%d",&iValue);

    printf("Enter Frequency");
    scanf("%d",&iCount);

    Display(iValue,iCount);

    return 0;

}
