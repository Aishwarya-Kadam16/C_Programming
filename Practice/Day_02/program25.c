//Best approach

#include<stdio.h>

//static function
void display()
{
    //Iteration
    int iCnt = 0;

    for(iCnt = 1;iCnt<=4;iCnt++)
    {
        printf("Jay Ganesh...\n");
    }
}

int main()
{

    display();
    return 0;
}

//Drawback : It is a static code
//It is display Jay Ganesh exact 4 times on the screen