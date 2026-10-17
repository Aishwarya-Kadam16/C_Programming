#include<stdio.h>

int main()
{
    //sequence
    int iNo = 723614;       //need of iteration
    printf("Original value of iNo is : %d\n",iNo);
    printf("------------------------------------------------------\n"); //strip line
    int iDigit = 0;

    iDigit = iNo % 10;
    printf("iDigit is : %d\n",iDigit);
    iNo = iNo /10;
    printf("iNo is : %d\n",iNo);
    printf("------------------------------------------------------\n");

    iDigit = iNo % 10;
    printf("iDigit is : %d\n",iDigit);
    iNo = iNo /10;
    printf("iNo is : %d\n",iNo);
    printf("------------------------------------------------------\n");

    iDigit = iNo % 10;
    printf("iDigit is : %d\n",iDigit);
    iNo = iNo /10;
    printf("iNo is : %d\n",iNo);
    printf("------------------------------------------------------\n");

    iDigit = iNo % 10;
    printf("iDigit is : %d\n",iDigit);
    iNo = iNo /10;
    printf("iNo is : %d\n",iNo);
    printf("------------------------------------------------------\n");

    return 0;
}