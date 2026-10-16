//Accept input from user and display even numbers
//Use of short hand operator
#include<stdio.h>

//Dynamicfunction
void Display(int iNo)
{
    //Iteration

    int iCnt = 0;

    //dynamic loop

    for(iCnt = 2; iCnt<=iNo; iCnt+=2)
    {
            printf("%d\t",iCnt);
        
    }
    
    
    printf("\n");
}//Time Complexity : O(N/2)

int main()
{
    int iValue = 0;

    printf("Please Enter the frequency : \n");
    scanf("%d",&iValue);

    Display(iValue);        //Call by value(We are passing the value)
    return 0;
}