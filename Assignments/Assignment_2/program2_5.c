#include<stdio.h>
#include<stdbool.h>

/////////////////////////////////////////
//
//  Function Name : ChkEven
//  Description :   It is used to check the number is even or odd
//  Input :         Int
//  Output :        void
//  Author :        Aishwarya Santosh Kadam
//  Date :          31/10/2025
//
/////////////////////////////////////////

bool ChkEven(int iNo)
{
    if((iNo%2)==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter Number");
    scanf("%d",&iValue);

    bRet = ChkEven(iValue);

    if(bRet==true)
    {
    printf("The Number is Even",bRet);
    }

    else
    {
    printf("The Number is Odd",bRet);
    }
    return 0;

}
