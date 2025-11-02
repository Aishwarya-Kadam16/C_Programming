#include<stdio.h>
#include<stdbool.h>

bool is_divisible_by_five(int number)
{
    if((number%5)==0)
    {
        //printf("true");
        return true;
    }
    else
    {
        //printf("false");
        return false;
    }
}
int main()
{
    int number = 0;

    printf("Enter Number : ");
    scanf("%d",&number);

    printf("%d\n", is_divisible_by_five(number));

    return 0;
}

//Time Complexity = O(N)