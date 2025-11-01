#include<stdio.h>

/////////////////////////////////////////
//
//  Function Name : TableRev
//  Description :   It is used to display the table of the number in reverse
//  Input :         Int
//  Output :        void
//  Author :        Aishwarya Santosh Kadam
//  Date :          31/10/2025
//
/////////////////////////////////////////

void TableRev(int iNo)
{
    int iCnt = 0;

    if(iNo<0)
    {
        iNo = -iNo;
    }

    for(iCnt =iNo*10; iCnt>=iNo ; iCnt--)
    {
        if((iCnt%iNo)==0)
        {
            printf("%d\t",iCnt);
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

    printf("Enter number : ");
    scanf("%d",&iValue);

    TableRev(iValue);

    return 0;
}


//Time Complexity = O(n)
