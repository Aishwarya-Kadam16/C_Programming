#include<stdio.h>

/////////////////////////////////////////
//
//  Function Name : DisplayFactor
//  Description :   It is used to display even factor of that number
//  Input :         Int
//  Output :        void
//  Author :        Aishwarya Santosh Kadam
//  Date :          31/10/2025
//
/////////////////////////////////////////

void DisplayFactor(int iNo)
{
    int i = 0;

    if(iNo<=0)
    {
        iNo = -iNo;
    }

    for(i=1;i<=iNo/2;i++)
    {
        if((iNo%i)==0)
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

    DisplayFactor(iValue);

    return 0;

}
