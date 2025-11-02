#include<stdio.h>

#include<stdlib.h>

int sum_even_numbers(int limit)
{
    int iSum = 0;

    int N =0;

    for(N=1;N<=limit;N++)

    {
        if((N%2)==0)
        {
            printf("%d\t",N);

            iSum = iSum + N;
        }

    }

    return iSum;
}
int main()
{
    int limit = 0;

    printf("Enter number : ");

    scanf("%d",&limit);

    printf("=\t%d\n",sum_even_numbers(limit));

    return 0;

}

//Time Complexity = O(N)

