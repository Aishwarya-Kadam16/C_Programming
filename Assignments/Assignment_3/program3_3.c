#include<stdio.h>

/////////////////////////////////////////
//
//  Function Name : DisplayEvenFactors
//  Description :   It is used to print even factors of that number
//  Input :         Int
//  Output :        Int
//  Author :        Aishwarya Santosh Kadam
//  Date :          31/10/2025
//
/////////////////////////////////////////

void DisplayEvenFactors(int iNo)
{
    int i =0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for(i=1;i<=iNo/2;i++)
    {
        if((iNo%i)==0&&(i%2)==0)
        {
            printf("%d\t",i);
        }
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
    printf("Enter number\n");
    scanf("%d",&iValue);

    DisplayEvenFactors(iValue);
    
    return 0;
}