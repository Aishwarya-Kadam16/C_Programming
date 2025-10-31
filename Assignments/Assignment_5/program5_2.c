#include<stdio.h>

/////////////////////////////////////////
//
//  Function Name : SumNonFact
//  Description :   It is used to find maximum of two numbers
//  Input :         Int , Int
//  Output :        Int
//  Author :        Aishwarya Santosh Kadam
//  Date :          31/10/2025
//
/////////////////////////////////////////

int FindMax(int a , int b)
{
    if(a>=b)
    {
        return a;
    }
    else
    { 
        return b;
    }

    
}

////////////////////////////////////////////////
//
//  Entry Point Function of the Application
//
////////////////////////////////////////////////

int main()
{
    int num1 , num2 ,result;
    printf("Enter two numbers : ");
    scanf("%d%d",&num1,&num2);

    result = FindMax(num1 , num2);

    printf("Maximum is : %d\n",result);
    return 0;
}

