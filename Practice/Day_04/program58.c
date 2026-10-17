//Accept number from user and check whether number is prime or not


#include<stdio.h>
#include<stdbool.h>

int CheckPrime(int iNo)
{
    int iCnt = 0;
    bool bFlag = false;

    if(iNo < 0)
    {
        iNo = -iNo; 
    }

    bFlag = true;
    for(iCnt = 2;iCnt<=(iNo/2);iCnt++)
    {
        if((iNo % iCnt)==0)
        {   
            bFlag = false;
            break;                  //Optimization using break
        }
    }

    return bFlag;
    
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