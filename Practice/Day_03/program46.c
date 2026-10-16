//Factors of 6
//Wrong Approach 
#include<stdio.h>

void DisplayFactors(int iNo)
{
    //Sequence of selection
    if((iNo % 1) == 0)
    {
        printf("1\n");
    }

    if((iNo % 2) == 0)
    {
        printf("2\n");
    }

    if((iNo % 3) == 0)
    {
        printf("3\n");
    }

    if((iNo % 4) == 0)
    {
        printf("4\n");
    }

    if((iNo % 5) == 0)
    {
        printf("5\n");
    }
}
int main()
{
    int iValue = 0;

    printf("Enter the Number : ");
    scanf("%d",iValue);
    DisplayFactors(iValue);
}

//Drawback : iNo value is fixed and there are only 5 if statements
// so for input greater than 6 its not valid
//So we need loop