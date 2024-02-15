//Problem Statement-Accept 2 values from user and perform addition

//step1:understand the problem statement
//conclusion:To accept 2 integer and perform the addition

//step2:write  the algorithm
/*  START
        Accept 1st number from user and store it into no1
        Accept 2nd number from user and store it into no2
        Create one variable to store result named as Ans
        Perform Addition of no1 and no2 and store result in Ans
        Display  the result from Ans to the user
    STOP
*/

//step 3: Decide the programming language to write program(C/C++/Java)
//we select c language

//step4:write the program

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Entry point function of an application which performs application which performs addition of  2 integer 
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int Addition(int iNo1,int iNo2)
{
    int isum=0;
    isum=iNo1+iNo2;
    return isum;
  
}
int main()
{     
    auto int ivalue1=0;
    auto int ivalue2=0;
    auto int iAns=0;      

    printf("enter ivalue1:\n");
    scanf("%d",&ivalue1);

    printf("enter ivalue2:\n");
    scanf("%d",&ivalue2);

    iAns=Addition(ivalue1,ivalue2);

    printf("Addition is:%d",iAns);
    
    return 0;
}