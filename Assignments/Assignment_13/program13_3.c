#include<stdio.h>

void print_odd_numbers(int limit)
{
    int N =0;

    for(N=1;N<=limit;N++)
    {
        if((N%2)!=0)
        {
            printf("%d\t",N);
        }
    }
}
int main()
{
    int limit = 0;

    printf("Enter number : ");
    scanf("%d",&limit);

    print_odd_numbers(limit);

    return 0;
}

//Time Complexity = O(N)