//Allocate the memory
//use the memory
//free the memory

#include<stdio.h>
#include<stdlib.h>


int main()
{
    int iLength = 0, iCnt = 0;          //Auto storage class
    int *iPtr = NULL;

    printf("Enter the number of elements : ");
    scanf("%d",&iLength);

    //Step 1 : Allocate the memory
    iPtr = (int *)malloc(iLength * sizeof(int));

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
    //Call to the function whicj contains business logic
    //fun(iPtr , iLength);

    //Step 3 : Free the memory
    free(iPtr);

    return 0;

}