//Best approach

#include<stdio.h>
void display(int iFrequency)
{
    //Iteration
    int iCnt = 0;

    //      1       2        3
    for(iCnt = 1;iCnt<=iFrequency;iCnt++)
    {
        printf("Jay Ganesh...\n");      //4
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the frequency : \n");
    scanf("%d",&iValue);

    display(iValue);
    return 0;
}

//Drawback : Doesn't handle negative values