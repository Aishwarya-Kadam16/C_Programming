#include<stdio.h>

/////////////////////////////////////////
//
//  Function Name : RectArea
//  Description :   It is used to calculate the area of rectangle
//  Input :         Float , Float
//  Output :        Double
//  Author :        Aishwarya Santosh Kadam
//  Date :          31/10/2025
//
/////////////////////////////////////////

double RectArea(float fWidth , float fHeight)
{
    float Area = 0.0f;

    Area = fWidth * fHeight;

    return Area;
}

////////////////////////////////////////////////
//
//  Entry Point Function of the Application
//
//////////////////////////////////////////////// 

int main()
{
    float fValue1 = 0.0f,fValue2 = 0.0f;
    double dRet = 0.0;

    printf("Enter width : ");
    scanf("%f",&fValue1);

    printf("Enter height : ");
    scanf("%f",&fValue2);

    dRet = RectArea(fValue1,fValue2);

    printf("Area of Rectangle is %f ",dRet);

    return 0;

}