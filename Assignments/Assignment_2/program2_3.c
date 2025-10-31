#include<stdio.h>

/////////////////////////////////////////
//
//  Function Name : Display
//  Description :   It is used to print Hello if number is less than 10 , otherwise print Demo
//  Input :         Int
//  Output :        void
//  Author :        Aishwarya Santosh Kadam
//  Date :          31/10/2025
//
/////////////////////////////////////////

void Display(int iNo)
{
    if(iNo<10)
    {
        printf("Hello");
    }

    else
    {
        printf("Demo");
    }


}
int main()
{
    int iValue = 0;

    printf("Enter Number");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;

}
