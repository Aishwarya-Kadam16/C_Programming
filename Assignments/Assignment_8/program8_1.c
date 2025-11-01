#include<stdio.h>

/////////////////////////////////////////
//
//  Function Name : Number
//  Description :   It is used to print small , medium and large depends on the condition
//  Input :         Int
//  Output :        void
//  Author :        Aishwarya Santosh Kadam
//  Date :          31/10/2025
//
/////////////////////////////////////////

void Number(int iNo)
{
    if(iNo<50)
    {
        printf("Small");
    }

    if(iNo>50 && iNo<100)
    {
        printf("Medium");
    }
    
    if(iNo>100)
    {
        printf("Large");
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

    printf("Enter Number");
    scanf("%d",&iValue);

    Number(iValue);

    return 0;
}

//Time Complexity = O(1)