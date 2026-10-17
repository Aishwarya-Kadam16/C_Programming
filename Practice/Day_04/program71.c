//code to demonstrate the iteration
//Reusable code 

#include<stdio.h>

int SumDigits(int iNo)
{

    int iDigit = 0, iSum = 0;

    //Updator
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo !=0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;
        iNo = iNo /10;
        
    }

    return iSum;
}

int main()
{
    int iValue = 0, iRet = 0;
    
    printf("Enter the number : ");
    scanf("%d",&iValue);
    printf("Original value of iNo is : %d\n",iValue);
    printf("------------------------------------------------------\n"); 

    iRet = SumDigits(iValue); 
    printf("Sum of digits are : %d\n",iRet);
 
    return 0;
}