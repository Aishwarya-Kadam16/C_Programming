//Accept input from user and display even numbers

#include<stdio.h>

//Dynamicfunction
void Display(int iNo)
{
    //Iteration

    int iCnt = 0;

    //dynamic loop
    for(iCnt = 2; iCnt<=iNo; iCnt = iCnt + 2)
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