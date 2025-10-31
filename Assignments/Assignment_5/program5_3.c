#include<stdio.h>

/////////////////////////////////////////
//
//  Function Name : SumNonFact
//  Description :   It is used to check leap year
//  Input :         Int
//  Output :        void
//  Author :        Aishwarya Santosh Kadam
//  Date :          31/10/2025
//
/////////////////////////////////////////

void CheckLeapYear(int year)
{
    if((year%4)==0 && (year%100)!=0 || (year%400)==0)
    {
        printf("The year is Leap year");
    }
    else
    {
        printf("The year is not leap year");
    }
}

////////////////////////////////////////////////
//
//  Entry Point Function of the Application
//
////////////////////////////////////////////////

int main()
{
    int yr;

    printf("Enter year : ");
    scanf("%d",&yr);

    CheckLeapYear(yr);

    return 0;
}