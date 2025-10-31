#include<stdio.h>

/////////////////////////////////////////
//
//  Function Name : Multiply
//  Description :   It is used to accept the numbers and print its multiplication
//  Input :         Int , Int , Int
//  Output :        Int
//  Author :        Aishwarya Santosh Kadam
//  Date :          31/10/2025
//
/////////////////////////////////////////

int Multiply(int iNo1 , int iNo2 , int iNo3)
{
    int result = 0;
    if(iNo1==0 && iNo2==0 && iNo3==0)
    {
        result = 0;
    }
    else if(iNo1==0 && iNo2==0)
    {
        result = iNo3;
    }
    else if(iNo2==0 && iNo3==0)
    {
        result = iNo1;
    }
    else if(iNo1==0 && iNo3==0)
    {
        result = iNo2;
    }
    else if(iNo1==0)
    {
        result = iNo2 * iNo3;
    }
    else if(iNo2==0)
    {
        result = iNo1 * iNo3;
    }
    else if(iNo3==0)
    {
        result = iNo1 * iNo2;
    }
    else
    {
    result = iNo1 * iNo2 * iNo3;
    }
    
    return result;
}

////////////////////////////////////////////////
//
//  Entry Point Function of the Application
//
//////////////////////////////////////////////// 

int main()
{
    int iValue1=0 , iValue2 =0,iValue3 = 0, iRet = 0;
    printf("Please enter three numbers");
    scanf("%d%d%d",&iValue1,&iValue2,&iValue3);

    iRet = Multiply(iValue1,iValue2,iValue3);

    printf("The Multiplication is : %d",iRet);

    return 0;
}

//Time Complexity = O(1)