//Accept number from user and check whether number is prime or not

/*
ALGORITHM
    START
        Step 1 : Accept Number from user as No
        Step 2 : Travel from 2 to No/2
        Step 3 : If any number is factor , increament 1 counter
        Step 4 : if counter is 0 , display it is prime
        Step 5 : Otherwise it is non prime
    STOP
*/
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
        if((iNo % iCnt )==0)
        {
            iFrequency++;
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
} //Time Complexity : O(N/2)

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