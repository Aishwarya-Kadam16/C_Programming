/*
ALGORITHM

Step 1: Take input as 7 statically
Step 2: Iterate the loop for 7 time
Step 3: Display te output using loop counter

*/

#include<stdio.h>

//Dynamicfunction
void Display(int iNo)
{
    //Iteration

    int iCnt = 0;

    for(iCnt = 1; iCnt<=iNo; iCnt++)
    {
        printf("%d\t",iCnt);
    }
    
    
    printf("\n");
}

int main()
{

    Display(7);
    return 0;
}