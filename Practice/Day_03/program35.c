//Display numbers in reverse order
//5 4   3   2   1        (Displacement : -)
//1 2   3   4   5       (Displacement : +)
#include<stdio.h>

void Display()
{
    //Iteration

    int iCnt = 0;       //(Initialiazation)

    //   start       end  displacement  
    for(iCnt = 5; iCnt>=1; iCnt--)
    {
        printf("%d\t",iCnt);
    }

    printf("\n");
}

int main()
{
    Display();
    return 0;
}