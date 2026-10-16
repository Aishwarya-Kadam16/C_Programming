//Accept input from user and display even numbers
//Combination of sequence,selection,iteration
#include<stdio.h>

//Dynamicfunction
void Display(int iNo)
{
    //Iteration

    int iCnt = 0;

    //dynamic loop

    for(iCnt = 1; iCnt<=iNo; iCnt++)
    {
        if((iCnt%2)==0)
        {
            printf("%d\t",iCnt);
        }   
    }
    
    
    printf("\n");
}//Time Complexity : O(N)

int main()
{
    int iValue = 0;

    printf("Please Enter the frequency : \n");
    scanf("%d",&iValue);

    Display(iValue);        //Call by value(We are passing the value)
    return 0;
}