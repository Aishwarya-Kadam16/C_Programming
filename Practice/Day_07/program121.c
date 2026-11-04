#include<stdio.h>

void display(int Arr[])
{
    int iCnt =0;

    for(iCnt = 0;iCnt<7;iCnt++)
    {
        printf("%d\n",Arr[iCnt]);            
    }
}

int main()
{
    int Brr[] = {10,20,30,40};                 

    display(Brr);           //call by address
    
    return 0;
}

//Drawback : passes 4 elements in array , and display fun loop iterates for 7 time