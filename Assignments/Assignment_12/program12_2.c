#include<stdio.h>

int count_factors(int number)
{
    int iCnt = 0;

    int iCount = 0;

    for(iCnt = 1;iCnt<=(number/2); iCnt++)
    {
        if((number%iCnt)==0)
        {
            //printf("%d\t",iCnt);

            iCount++;

            
        }

        
    }

    return iCount;
}
int main()
{
    int number = 0;

    printf("Enter Number : ");
    scanf("%d",&number);

    printf("%d\n",count_factors(number));

    return 0;
}

//Time Complexity = O(N/2)