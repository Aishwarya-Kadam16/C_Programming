#include<stdio.h>

/////////////////////////////////////////
//
//  Function Name : FindLargest
//  Description :   It is used to find largest among three numbers
//  Input :         Int , Int , Int
//  Output :        Int
//  Author :        Aishwarya Santosh Kadam
//  Date :          31/10/2025
//
/////////////////////////////////////////

int FindLargest(int x, int y, int z)
{
    if(x>=y && x>=z)
    {
        return x;
    }
    else if(y>=x && y>=z)
    {
        return y;
    }
    else
    {
        return z;
    }
}

////////////////////////////////////////////////
//
//  Entry Point Function of the Application
//
//////////////////////////////////////////////// 

int main()
{
    int a=0 , b=0, c=0 ,result=0;

    printf("Enter three numbers: ");
    scanf("%d\t%d\t%d",&a,&b,&c);

    result = FindLargest(a,b,c);

    printf("Largest number is : %d\n",result);

    return 0;
}