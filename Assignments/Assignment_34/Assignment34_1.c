#include<stdio.h>

void DisplayASCII()
{
    int i = 0;

    printf("Symbol\tDecimal\tOctal\tHexadecimal\n");

    for(i = 0; i <= 255; i++)
    {
        printf("%c\t%d\t%o\t%X\n", i, i, i, i);
    }
}

int main()
{
    DisplayASCII();
    return 0;
}