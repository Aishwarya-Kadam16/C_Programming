#include<stdio.h>

/////////////////////////////////////////
//
//  Function Name : DisplayConvert
//  Description :   It is used for convert the case of character
//  Input :         Int
//  Output :        Int
//  Author :        Aishwarya Santosh Kadam
//  Date :          31/10/2025
//
/////////////////////////////////////////

void DisplayConvert(int cValue)
{
    if(cValue >='a' && cValue <= 'z')
    {
        printf("%c",cValue-32);
    }
    else if(cValue >= 'A' && cValue <= 'Z')
    {
        printf("%c",cValue+32);
    }
}

////////////////////////////////////////////////
//
//  Entry Point Function of the Application
//
////////////////////////////////////////////////

int main()
{
    char cValue = '\0';

    printf("Even character\n");
    scanf("%c",&cValue);

    DisplayConvert(cValue);

    return 0;
}