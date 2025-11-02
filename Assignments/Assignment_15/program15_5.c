#include<stdio.h>

int MultDigits(int iNo)
{

    int iNo1 = iNo;

    int iDigit = 0;

     int iDigit1 = 0;

    int iCount1 = 0;

    int iCount = 0;

    int iCount11 = 0;

    

    while(iNo != 0)
    {
        iDigit1 = iNo% 10;

        if((iDigit1 %2)==0)
        {

            iCount = iCount + iDigit1;
        }
        iNo = iNo/10;
    }

    while(iNo1 != 0)
    {
        iDigit = iNo1% 10;

        if((iDigit%2)!=0)
        {
            iCount1 = iCount1 + iDigit;
        }
        iNo1 = iNo1/10;
        
    }
    printf("%d - ",iCount);
    printf("%d",iCount1);

    
    iCount11 = iCount - iCount1;
    
    return iCount11;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = MultDigits(iValue);

    printf(" = %d",iRet);

    return 0;

}

//Time Complexity = O(log n)