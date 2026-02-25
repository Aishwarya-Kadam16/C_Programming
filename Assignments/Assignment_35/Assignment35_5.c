#include<stdio.h>

void Reverse(char *str)
{
    int i = 0, j = 0;
    char temp;

    while(str[i] != '\0')
    {
        i++;
    }

    j = i - 1;
    i = 0;

    while(i < j)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;

        i++;
        j--;
    }

    printf("Reversed string : %s", str);
}

int main()
{
    char arr[50];

    printf("Enter string : ");
    scanf("%[^'\n']s",arr);

    Reverse(arr);

    return 0;
}