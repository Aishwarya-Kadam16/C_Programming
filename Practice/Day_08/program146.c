#include<stdio.h>
#include<stdlib.h>
typedef int * IPTR;

int maximum(int Arr[], int iSize)
{
    int iCnt = 0, iMax = 0;

    for(iCnt = 0,iMax = Arr[iCnt];iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
    }
    
    return iMax;
}           

int main()
{
    int iLength = 0, iCnt = 0, iRet = 0;          //Auto storage class
    
    IPTR iPtr = NULL;

    printf("Enter the number of elements : ");
    scanf("%d",&iLength);

    //Step 1 : Allocate the memory
    iPtr = (IPTR)malloc(iLength * sizeof(int));

    if(NULL == iPtr)
    {
        printf("Unable to the allocate memory");
        return -1;
    }

    printf("Enter the values : ");
    for(iCnt = 0;iCnt<iLength;iCnt++)
    {
        scanf("%d",&iPtr[iCnt]);
    }


    //Step 2 : Use the memory
    iRet = maximum(iPtr, iLength);

    printf("Maximum number is %d\n",iRet);

    //Step 3 : Free the memory
    free(iPtr);

    return 0;

}