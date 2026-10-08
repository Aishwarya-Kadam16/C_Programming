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

///////////////////////////////////////////////////////////////////
//                      Required Header Files
///////////////////////////////////////////////////////////////////
#include<stdio.h>

///////////////////////////////////////////////////////////////////
//  Function Name : AdditionTwoNumbers
//  Description   : It is used to perform addition
//  input         : Float, Float
//  output        : Float
//  Author        : Aishwarya Santosh Kadam
//  Date          : 07/10/2026
///////////////////////////////////////////////////////////////////
float AdditionTwoNumbers(float fNo1,    //first input
                         float fNo2     //second input
                        )
{
    float fSum = 0.0f;                  //To store the result
    
    if(fNo1<0.0f)                       //Updator
    {
        fNo1 = -fNo1;
    }

    if(fNo2<0.0f)                       //Updator
    {
        fNo2 = -fNo2;
    }

    fSum = fNo1 + fNo2;                 //Business Logic

    return fSum;
}   //End of AdditionTwoNumbers

///////////////////////////////////////////////////////////////////
//          Entry point function for the application
///////////////////////////////////////////////////////////////////
int main()
{
    float fValue1 = 0.0f , fValue2 = 0.0f;      //To accept user input
    float fRet = 0.0f;                          //To store the result

    printf("Enter the first number : \n");
    scanf("%f",&fValue1);

    printf("Enter the second number : \n");
    scanf("%f",&fValue2);

    fRet = AdditionTwoNumbers(fValue1,fValue2); //Function call

    printf("Addition is : %f",fRet);
    return 0;
}   //End of main

///////////////////////////////////////////////////////////////////
//              Test cases for the Application
//      Input1              Input2          Output
//       10.5                3.2             13.5
//       10.5               -3.2             13.5
//       -10.5               3.2             13.5
//       -10.5              -3.2             13.5
//       10.5                 0              13.5
///////////////////////////////////////////////////////////////////