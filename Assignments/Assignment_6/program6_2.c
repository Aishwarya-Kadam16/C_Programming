#include<stdio.h>
#include<stdbool.h>

/////////////////////////////////////////
//
//  Function Name : ChkGreater
//  Description :   It is used to check whether the number is greater than 100 or not
//  Input :         Int
//  Output :        bool
//  Author :        Aishwarya Santosh Kadam
//  Date :          31/10/2025
//
/////////////////////////////////////////

bool ChkGreater(int num)
{
    if(num>=100)
    {
        return true;
    }
    else
    {
        return false;
    }
}

////////////////////////////////////////////////
//
//  Entry Point Function of the Application
//
//////////////////////////////////////////////// 

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Please enter number ");
    scanf("%d",&iValue);

    bRet =ChkGreater(iValue);
    if(bRet==true)
    {
        printf("Greater");
    }
    else
    {
        printf("Smaller");
    }


    return 0;
}

//Time Complexity = O(1)