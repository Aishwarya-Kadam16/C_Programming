#include<stdio.h>

int sum_of_factors(int number)
{
    int iCnt = 0;

    int iSum =0;

    for(iCnt = 1; iCnt<=(number/2);iCnt++)
    {
        if((number%iCnt)==0)
        {
            //printf("%d\t",iCnt);

            iSum = iSum + iCnt;
        }
    }

    return iSum;
}
int main()
{
    int number = 0;

    printf("Enter Number : ");
    scanf("%d",&number);

    printf("%d\n", sum_of_factors(number));

    return 0;
}

//Time Complexity = O(N/2)