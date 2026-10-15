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

#include<stdio.h>

void CheckEvenOdd(int iNo)
{
    int iRem = 0;
    iRem = iNo % 2;
    if(iRem == 0)
    {
        printf("%d is even number\n",iNo);
    }

    else
    {
        printf("%d is odd number\n",iNo);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    CheckEvenOdd(iValue);      //call by value

    return 0;
}

//Drawbacks : User interaction helper function madhe nako
//There should not be any interaction in helper function