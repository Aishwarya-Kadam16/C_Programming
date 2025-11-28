#include<stdio.h>
#include<stdlib.h>

void DigitsSum(int Arr[],int iLength)
{
    int iCnt=0,iDigit = 0,iSum=0 , iSum1=0 ,iDiff=0;

    for(iCnt=0;iCnt<iLength;iCnt++)
    { 
        if((Arr[iCnt]%2)==0)
        {
            while(Arr[iCnt]!=0)
            {               
                iDigit = Arr[iCnt]%10;
                //printf("%d",iDigit);

                Arr[iCnt] = Arr[iCnt]/10;
                
                iSum = iSum + iDigit;   
                 
            }
        }       
        else
        {
            while(Arr[iCnt]!=0)
            {               
                iDigit = Arr[iCnt]%10;
                //printf("%d",iDigit);

                Arr[iCnt] = Arr[iCnt]/10;
                
                iSum1 = iSum1 + iDigit;   
                
            }
            
        }          
    }            
    printf("Sum of even number is %d\n",iSum);  
    printf("Sum of Odd number is %d\n",iSum1); 

    iDiff=iSum - iSum1;
    printf("The Difference between sum of even and odd number is %d",iDiff);
}
int main()
{
    int iSize = 0,iRet = 0 , iCnt =0;
    int *p = NULL;

    printf("Enter number of elements : ");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements ", iSize);

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }

    DigitsSum(p,iSize);

    

    free(p);

    return 0;
}