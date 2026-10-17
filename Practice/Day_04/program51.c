//Count number of factors
/*
ALGORITHM
    START
    Step 1 : Accept the number from user as No
    Step 2 : Iterate the loop upto (No/2)
    Step 3 : If (No % iCnt)==0 , count the frequency
    STOP
*/

#include<stdio.h>

int CountFactors(int iNo)
{
    int iCnt = 0, iFrequency = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1;iCnt<=(iNo/2);iCnt++)
    {
        if((iNo % iCnt )==0)
        {
            iFrequency++;
        }
    }

    return iFrequency;
} //Time Complexity : O(N/2)

int main()
{
    int iValue = 0, iRet = 0;
    printf("Enter the number : \n");
    scanf("%d",&iValue);

    iRet = CountFactors(iValue);

    printf("Number of factors are : %d\n",iRet);

    return 0;
}