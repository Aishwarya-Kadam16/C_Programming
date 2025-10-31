#include<stdio.h>

////////////////////////////////////////////////
//
//  Entry Point Function of the Application
//  Description : Accept name from user and print that name
//  Author : Aishwarya Santosh Kadam
//  Date : 31/10/2025
//
//////////////////////////////////////////////// 


int main()
{
    char Name[30];
    printf("Please enter full name");
    scanf("%[^\n]",&Name);

    printf("Your name is %s ",Name);

    return 0;
}


//Time Complexity = O(1)