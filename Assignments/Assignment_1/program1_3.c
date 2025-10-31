#include<stdio.h>

/////////////////////////////////////////
//
//  Function Name : Display
//  Description :   It is used to print 5 to 1 numbers on screen.
//  Input :         None
//  Output :        void
//  Author :        Aishwarya Santosh Kadam
//  Date :          31/10/2025
//
/////////////////////////////////////////


void Display()
{
    int i = 0;
    i = 5;
    while(i>=1)
    {
        printf("%d",i);
        i--;
    }
}

////////////////////////////////////////////////
//
//  Entry Point Function of the Application
//
//////////////////////////////////////////////// 

int main()
{
    Display();

    return 0;

}

