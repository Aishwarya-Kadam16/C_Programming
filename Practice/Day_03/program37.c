/*
ALGORITHM

Step 1: Take input from user  as No
Step 2: Iterate the loop for No time
Step 3: Display te output using loop counter

*/

#include<stdio.h>

//Dynamicfunction
void Display(int iNo)
{
    //Iteration

    int iCnt = 0;

    //dynamic loop
    for(iCnt = 1; iCnt<=iNo; iCnt++)
    {
        printf("%d\t",iCnt);
    }
    
    
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Please Enter the frequency : \n");
    scanf("%d",&iValue);

    Display(iValue);        //Call by value(We are passing the value)
    return 0;
}