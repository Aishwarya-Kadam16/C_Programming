/*
Step 1: Understand the problem statement
Step 2: Write the algorithm
Step 3: Decide programming language
Step 4: Write the program
Step 5: Test the program
*/

/*

                Algoruthm

    START
        Accept First number as No1
        Accept Second number as No2
        If the input is negative then convert it into positive
        Perform Addition of No1 and No2
        Display the Addition on screeb
    STOP

*/

////////////////////////////////////////////////////////////////////
//
// Required  Header Files
//
////////////////////////////////////////////////////////////////////
#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name : AdditionTwoNumbers  
//  Description :   It is used to perform Addition  
//  Input :         float , float
//  Output :        float
//  Author :        Aishwarya Santosh Kadam
//  Date :          09/10/2025
//
////////////////////////////////////////////////////////////////////
float AdditionTwoNumbers(float fNo1, float fNo2)
{
    float fSum = 0.0f;


    //Updator
    if(fNo1<0.0f)
    {
        fNo1 = -fNo1;
    }

    if(fNo2<0.0f)
    {
        fNo2 = -fNo2;
    }

    fSum = fNo1 + fNo2;    //Business Logic
    return fSum;
}

////////////////////////////////////////////////////////////////////
//  
//  Entry point function for the application
//
////////////////////////////////////////////////////////////////////
int main()
{
    float fValue1 = 0.0f , fValue2 = 0.0f , fRet =0.0f;

    printf("Enter First Number : \n");
    scanf("%f",&fValue1);

    printf("Enter Second Number : \n");
    scanf("%f",&fValue2);

    fRet = AdditionTwoNumbers(fValue1,fValue2);  

    printf("Addition is: %f \n", fRet);

    return 0;
}

////////////////////////////////////////////////////////////////////
//
//  Testcases successfully handeled by the application
//
//  Input1 : 10.5    Input2 : 3.2     Output : 13.7
//  Input1 : -10.5   Input2 : 3.2     Output : 13.7
//  Input1 : 10.5    Input2 : -3.2    Output : 13.7
//  Input1 : -10.5   Input2 : -3.2    Output : 13.7
//  Input1 : 10.5    Input2 : 0.0     Output : 13.7
//
////////////////////////////////////////////////////////////////////