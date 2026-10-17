//code to demonstrate the iteration
//Reusable code 

#include<stdio.h>

int CountDigits(int iNo)
{

    int iDigit = 0, iCount = 0;

    while(iNo !=0)
    {
        iDigit = iNo % 10;
        //printf("iDigit is : %d\n",iDigit);
        iCount++;
        iNo = iNo /10;
        //printf("iNo is : %d\n",iNo);
        //printf("------------------------------------------------------\n");
    }

    return iCount;
}

int main()
{
    int iValue = 0, iRet = 0;
    
    printf("Enter the number : ");
    scanf("%d",&iValue);
    printf("Original value of iNo is : %d\n",iValue);
    printf("------------------------------------------------------\n"); 

    iRet = CountDigits(iValue); 
    printf("Count of digits are : %d\n",iRet);
 
    return 0;
}