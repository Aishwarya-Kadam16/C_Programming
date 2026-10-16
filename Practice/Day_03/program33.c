#include<stdio.h>

void Display()
{
    //Iteration

    int iCnt = 0;

    for(iCnt = 1;iCnt<=5;iCnt++)
    {
        printf("%d\t*\t",iCnt);
    }
      
    printf("\n");
}

int main()
{
    Display();
    return 0;
}