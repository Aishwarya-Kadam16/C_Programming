#include<stdio.h>

/////////////////////////////////////////
//
//  Function Name : CircleArea
//  Description :   It is used to calculate the area of the circle
//  Input :         float
//  Output :        double
//  Author :        Aishwarya Santosh Kadam
//  Date :          31/10/2025
//
/////////////////////////////////////////

double CircleArea(float fRadius)
{
    float Area = 0.0f;
    float PI = 3.14; 

    Area = PI * fRadius *fRadius;

    return Area;
}

////////////////////////////////////////////////
//
//  Entry Point Function of the Application
//
//////////////////////////////////////////////// 

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter radius : ");
    scanf("%f",&fValue);

    dRet  = CircleArea(fValue);

    printf("Area of circle is %f ",dRet);

    return 0;
}