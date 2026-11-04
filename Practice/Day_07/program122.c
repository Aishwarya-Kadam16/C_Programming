#include<stdio.h>

void display(int Arr[],int iSize)
{
    int iCnt =0;

    for(iCnt = 0;iCnt<iSize;iCnt++)
    {
        printf("%d\n",Arr[iCnt]);            
    }
}

int main()
{
    int Arr[] = {10,20,30,40};  
    
    display(Arr,4);           //call by address, call by value
    
    return 0;
}

//Drawback : static memory allocation(It should be dynamic)
//No. of elements should be taking from user

