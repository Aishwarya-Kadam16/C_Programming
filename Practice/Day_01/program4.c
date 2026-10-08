//Addition of two numbers

#include<stdio.h>

int main()
{
    int i = 10 , j = 11, Ans = 0;       //local variables(storage class = Auto)

    Ans = i + j;

    printf("Addition is : %d",Ans);
    return 0;
}

//Drawbacks : no representable, program is static(values are fix)
//Program doesn't interact with the user