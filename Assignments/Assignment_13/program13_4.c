#include<stdio.h>

int sum_natural_numbers(int limit)
{
    int iSum = 0;

    iSum=(limit*(limit+1));

    //printf("%d\t",iSum);

    iSum = iSum/2;

    return iSum;
}
int main()
{
    int limit = 0;

    printf("Enter number : ");

    scanf("%d",&limit);

    printf("%d\n",sum_natural_numbers(limit));

    return 0;

}

//Time Complexity = O(1)