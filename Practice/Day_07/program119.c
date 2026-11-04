#include<stdio.h>

void display(int Arr[])
{
    int iCnt =0;

    for(iCnt = 0;iCnt<4;iCnt++)
    {
        printf("%d\n",Arr[iCnt]);            
    }
}

int main()
{
    int Brr[] = {10,20,30,40,50,60,70};         //change          

    display(Brr);           //call by address
    
    return 0;
}

//Drawback : iCnt<4 (We uses hardcoded value)