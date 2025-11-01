#include<stdio.h>

/////////////////////////////////////////
//
//  Function Name : FhtoCs
//  Description :   It is used to convert temperature Fahrenheit into celcius.
//  Input :         Float
//  Output :        Double
//  Author :        Aishwarya Santosh Kadam
//  Date :          31/10/2025
//
/////////////////////////////////////////

double FhtoCs(float fTemp)
{
    float Celcius = 1.0;

    Celcius = (fTemp - 32);

    Celcius = Celcius * 0.55555555;

    return Celcius;
}

////////////////////////////////////////////////
//
//  Entry Point Function of the Application
//
//////////////////////////////////////////////// 

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0f;

    printf("Enter temperature in Fahrenheit : ");
    scanf("%f",&fValue);

    dRet = FhtoCs(fValue);

    printf("Temperature in Celcius %f ",dRet);

    return 0;
}

//Time Complexity = O(1)
