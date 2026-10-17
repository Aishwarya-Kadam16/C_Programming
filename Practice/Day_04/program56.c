//Accept number from user and check whether number is prime or not
//Use of break keyword
//Remove iFrequency

#include<stdio.h>
#include<stdbool.h>

int CheckPrime(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo; 
    }

    for(iCnt = 2;iCnt<=(iNo/2);iCnt++)
    {
        if((iNo % iCnt)==0)
        {    
            break;                  //Optimization using break
        }
    }

    if(iCnt > (iNo/2))         //No factors
    {
        return true;
    }

    else                        //At least one factor
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