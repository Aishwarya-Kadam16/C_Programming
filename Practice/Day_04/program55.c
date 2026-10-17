//Accept number from user and check whether number is prime or not
//Use of break keyword

#include<stdio.h>
#include<stdbool.h>

int CheckPrime(int iNo)
{
    int iCnt = 0, iFrequency = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 2;iCnt<=(iNo/2);iCnt++)
    {
        if((iNo % iCnt)==0)
        {
            iFrequency++;
            break;                  //Optimization using break
        }
    }

    if(iFrequency == 0)         //No factors
    {
        return true;
    }

    else                        //At least one factor
    {
        return false;
    }
} //Time Complexity for prime : N/2
// For non prime : either 1(even) or 2(odd)

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    bRet = CheckPrime(iValue);

    if(bRet == true)
    {
        printf("%d is prime number \n",iValue);
    }

    else
    {
        printf("%d is not a prime number\n",iValue);
    }

    return 0;
}