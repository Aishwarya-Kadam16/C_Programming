#include<stdio.h>
#include<stdlib.h>

float average(int Arr[],int iSize)
{
    int iCnt =0, iSum = 0;
    float fAvg = 0.0;

    for(iCnt = 0;iCnt<iSize;iCnt++)
    {
        iSum = iSum + Arr[iCnt];     
    }

    fAvg = (float)iSum / (float)iSize;
    return fAvg;

}

int main()
{
    int iLength = 0,iCnt = 0;
    int *ptr = NULL;
    float fRet = 0.0;

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
    
    fRet = average(ptr,iLength);           //call by address, call by value

    printf("The average of elements are : %f\n ",fRet);

    free(ptr);
    
    return 0;
}

