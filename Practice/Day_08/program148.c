#include<stdio.h>
#include<stdlib.h>
typedef int * IPTR;

void update(int Arr[], int iSize)
{
    int iCnt = 0;
    for(iCnt = 0;iCnt<iSize;iCnt++)
    {
        Arr[iCnt]++;
    }   
    
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
    update(iPtr, iLength);

    printf("Updated data from array : \n");
    for(iCnt = 0;iCnt<iLength;iCnt++)
    {
        printf("%d\t",iPtr[iCnt]);
    }


    //Step 3 : Free the memory
    free(iPtr);

    return 0;

}