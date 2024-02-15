/problem statement -Accept radius from user and calculate area of circle.

//step1 1-Understand the problem statement
//Conclusion-We are going to use the formula as PI*R*R

//step2-write algorithm.
/*
    Start
     Accept radius from user and store it inoto Radius
     create variable PI and store value 3.14 in it.
     calculate area PI*RAdius*radius 
     display area


    Stop
*/



#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function name-CalculateArea
//    Description-it is use to calculate area of circle
//     Input-Float
//     Output-Flaot
//     Author name-Kshitija Shankar Suryawanshi
//     Date-2/10/2023
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#define PI=3.14

float CalculateArea(float fvalue)
{
    auto float fAns = 0.0f;
    fAns=fPI*fvalue*fvalue;
    return fAns;

}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//   Entry point funtion
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    auto float fRadius=0.0f;
    auto float fArea=0.0f;
    
    printf("enter value of radius:\n");
    scanf("%f",&fRadius);

    fArea=CalculateArea(fRadius);

    printf("Area of circle is:%f\n",fArea);

    return 0;
}