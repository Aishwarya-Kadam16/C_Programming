#include<stdio.h>

int MultDigits(int iNo)
{

    int iDigit = 0;
    
    int iCount = 1;

    while(iNo != 0)
    {
        iDigit = iNo% 10;

        if(iDigit==0)
        {
            iDigit = 1;
        }

        iNo = iNo/10;

        iCount = iCount * iDigit;
    }
    return iCount;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = MultDigits(iValue);

    printf("%d",iRet);

    return 0;

}