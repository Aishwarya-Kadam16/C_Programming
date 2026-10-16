#include<stdio.h>
#include<stdbool.h>

bool CheckDivisible(int iNo1, int iNo2)
{
    if((iNo1 % iNo2) == 0)
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
    int iValue1 = 0, iValue2 = 0;
    bool bRet = false;

    printf("Enter first number : \n");
    scanf("%d",&iValue1);

    printf("Enter second number : \n");
    scanf("%d",&iValue2);

    bRet = CheckDivisible(iValue1,iValue2);

    if(bRet)
    {
        printf("%d is completely divisible ",iValue1);
    }

    else
    {
        printf("%d is not divisible ",iValue1);
    }

    return 0;
}