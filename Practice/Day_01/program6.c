//Accept two numbers and perform Addition 
//Main and helper function(Reusability)
#include<stdio.h>

int Add(int a, int b)
{
    int Sum = 0;        //Local variable of add()
    Sum = a + b;        //Business Logic

    return Sum;
}
int main()
{
    int i = 0 , j = 0, Ans = 0;       //local variables(storage class = Auto)

    printf("Enter the first number : \n");
    scanf("%d",&i);

    printf("Enter the second number : \n");
    scanf("%d",&j);

    Ans = Add(i,j);

    printf("Addition is : %d",Ans);
    return 0;
}

//drawback : Use better variable name 
//Use of every identifier should be meaningful