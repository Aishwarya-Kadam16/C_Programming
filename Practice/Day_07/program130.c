#include<stdio.h>
#include<stdlib.h>

int countOdd(int Arr[],int iSize)
{
    int iCnt =0,iCount = 0;

    for(iCnt = 0;iCnt<iSize;iCnt++)
    {
        if((Arr[iCnt] % 2) == 1)
        {
            iCount++;
        }       
    }

    return iCount;

}

int main()
{
    int iLength = 0,iCnt = 0,iRet = 0;
    int *ptr = NULL;

    printf("Enter number of elements : ");
    scanf("%d",&iLength);           //iLength will hold number of elements

    ptr = (int*)malloc(iLength * sizeof(int));

    if(NULL == ptr)                              //Error
    {
        printf("Unable to allocate the memory");
        return -1;
    }

    printf("Enter the elements : ");

    for(iCnt = 0;iCnt<iLength;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    
    iRet = countOdd(ptr,iLength);           //call by address, call by value

    printf("The count of Odd elements are : %d\n ",iRet);

    free(ptr);
    
    return 0;
}

