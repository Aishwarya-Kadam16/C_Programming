//Ask user enter how many elements
//Allocate the memory
//Accept numbers from user and stored it into that array
//free the memory

#include<stdio.h>
#include<stdlib.h>

void display(int Arr[],int iSize)
{
    int iCnt =0;

    printf("The elements in the array are : ");
    for(iCnt = 0;iCnt<iSize;iCnt++)
    {
        printf("%d\n",Arr[iCnt]);            
    }
}

int main()
{
    int iLength = 0,iCnt = 0;
    int *ptr = NULL;

    printf("Enter number of elements : ");
    scanf("%d",&iLength);           //iLength will hold number of elements

    ptr = (int*)malloc(iLength * sizeof(int));

    if(NULL = ptr)                              //Error
    {
        printf("Unable to allocate the memory");
        return -1;
    }

    printf("Enter the elements : ");

    for(iCnt = 0;iCnt<iLength;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    
    display(ptr,iLength);           //call by address, call by value

    free(ptr);
    
    return 0;
}

