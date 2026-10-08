//Accept two numbers and perform Addition 
//Main and helper function(Reusability)

#include<stdio.h>

int AdditionTwoNumbers(int iNo1, int iNo2)
{
    int iSum = 0;        //Local variable of add()
    iSum = iNo1 + iNo2;        //Business Logic

    return iSum;
}
int main()
{
    int iValue1 = 0 , iValue2 = 0, iRet = 0;       //local variables(storage class = Auto)

    printf("Enter the first number : \n");
    scanf("%d",&iValue1);

    printf("Enter the second number : \n");
    scanf("%d",&iValue2);

    iRet = AdditionTwoNumbers(iValue1,iValue2);

    printf("Addition is : %d",iRet);
    return 0;
}
