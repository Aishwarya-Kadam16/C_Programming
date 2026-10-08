/*
Step 1 : Understand the problem statement
Step 2 : Write the algorithm
Step 3 : Decide the programming language
Step 4 : Write the program
Step 5 : Test the program


Algorithm

    START

        Step 1 : Accept first input as No1

        Step 2 : Accept second input as No2

        Step 3 : If input is negative then convert it into positive

        Step 4 : Perform Addition of No1 and No2

        Step 5 : Display addition on screen

    STOP
*/

//Uses float for input and handle negative value as positive
#include<stdio.h>

float AdditionTwoNumbers(float fNo1, float fNo2)
{
    float fSum = 0.0f;        //Local variable of add()

    //Convert negative into positive
    //Updator
    if(fNo1<0.0f)
    {
        fNo1 = -fNo1;
    }

    if(fNo2<0.0f)
    {
        fNo2 = -fNo2;
    }

    fSum = fNo1 + fNo2;        //Business Logic

    return fSum;
}
int main()
{
    float fValue1 = 0.0f , fValue2 = 0.0f, fRet = 0.0f;       //local variables(storage class = Auto)

    printf("Enter the first number : \n");
    scanf("%f",&fValue1);

    printf("Enter the second number : \n");
    scanf("%f",&fValue2);

    fRet = AdditionTwoNumbers(fValue1,fValue2);

    printf("Addition is : %f",fRet);
    return 0;
}