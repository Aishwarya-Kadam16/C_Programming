//Accept two numbers and perform Addition 

#include<stdio.h>

int main()
{
    int i = 0 , j = 0, Ans = 0;       //local variables(storage class = Auto)

    printf("Enter the first number : ");
    scanf("%d",&i);

    printf("Enter the second number : ");
    scanf("%d",&j);

    Ans = i + j;        //Business Logic

    printf("Addition is : %d",Ans);
    return 0;
}

//Program is user interactive , accept input from user
//Drawback : your program should be reusable