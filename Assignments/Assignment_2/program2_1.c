#include<stdio.h>

/////////////////////////////////////////
//
//  Function Name : Display
//  Description :   It is used to print number of * on the screen
//  Input :         Int
//  Output :        void
//  Author :        Aishwarya Santosh Kadam
//  Date :          31/10/2025
//
/////////////////////////////////////////
void Display(int iNo)
{
    int iCnt = 0;
    
    if(iNo<0)
    {
        iNo = -iNo;
    }

    while(iCnt<iNo)
    {
        printf("*");
        iCnt++;
    }

}

int main()
{
    int iValue = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;

}
