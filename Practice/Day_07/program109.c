#include<stdio.h>

int main()
{
    int Arr[] = {10,20,30,40};

    printf("%d\n",Arr);                     //Base address of first element            
    printf("%d\n",&Arr);                    //Base address of whole array
    printf("%d\n",&(Arr[0]));               //Base address of first element 
    printf("%lu",sizeof(Arr));
    return 0;
}