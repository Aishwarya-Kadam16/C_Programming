#include<stdio.h>
#include<stdlib.h>

int RangeSum(int iStart,int iEnd)
{
    int iCnt = 0;

    if(iStart>iEnd)
    {
        printf("Invalid range");
        exit(0);
    }

    if(iStart<0)
    {
        printf("Invalid range");
        exit(0);
    }

    int product = 0;    

    for(iCnt=iStart;iCnt<=iEnd;iCnt++)
    {
            printf("%d\t",iCnt);
    
        product =product + iCnt;
   
    }
    
    return product;
    
}
int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter Starting Point : ");
    scanf("%d",&iValue1);

    printf("Enter Ending Point : ");
    scanf("%d",&iValue2);

    iRet = RangeSum(iValue1,iValue2);

    printf("Addition is %d ",iRet);

    return 0;

}
