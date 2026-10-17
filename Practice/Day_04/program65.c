//code to demonstrate the iteration

#include<stdio.h>

int main()
{
    
    int iNo = 723614;
    printf("Original value of iNo is : %d\n",iNo);
    printf("------------------------------------------------------\n"); //strip line
    int iDigit = 0;


    while(iNo !=0)
    {
        iDigit = iNo % 10;
        printf("iDigit is : %d\n",iDigit);
        iNo = iNo /10;
        printf("iNo is : %d\n",iNo);
        printf("------------------------------------------------------\n");
    }
 
    return 0;
}