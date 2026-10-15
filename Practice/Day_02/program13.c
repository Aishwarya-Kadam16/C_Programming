//Check whether number is even or odd
/*
ALGORITHM
    START
        Accept Number from user and store it into No
        Divide No by 2
        if the reminder is 0 then display it as even
        otherwise as odd
    STOP
*/

#include<stdio.h>       //Input / output
#include<stdbool.h>     //Bool data type use karanyasathi

bool CheckEvenOdd(int iNo)
{
    int iRem = 0;
    iRem = iNo % 2;
    if(iRem == 0)
    {
        return true;
    }

    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    bRet = CheckEvenOdd(iValue);      //call by value

    printf("Result is : %d\n",bRet);
    return 0;
}

//Drawback : it display input as 0 or 1