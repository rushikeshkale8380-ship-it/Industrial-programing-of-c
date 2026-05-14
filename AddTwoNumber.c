///////////////////////////////////////////////////////////////////
//
// Include Required Header File
//
///////////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////////
//
// Function Name: AddTwoNumbers
// Input:         float,float
// Output:        float
// Description:   Performs Addition of 2 Floats
// Date:          08/05/2026
// Author:        Hrishikesh Satish Kale
//
///////////////////////////////////////////////////////////////////
float AddTwoNumbers(
                        float fNo1,     //First Input
                        float fNo2      //Second Input
                    )
{
    float fAns=0.0f;                    //Variable to Store the Result
    fAns=fNo1+fNo2;                     //Perform Addition
    return fAns; 
}
///////////////////////////////////////////////////////////////////
//
// Application To Perform Addition Of 2 Float Values
//
///////////////////////////////////////////////////////////////////
int main()
{
    float fValue1=0.0f;                   //To Store First Input
    float fValue2=0.0f;                   //To Store Second Input
    float fResult=0.0f;                   //To Store the Result

    printf("Enterr First Number:\n");
    scanf("%f",&fValue1);
    
    printf("Enter Second Number:\n");
    scanf("%f",&fValue2);

    fResult=AddTwoNumbers(fValue1,fValue2); 

    printf("Addition is:%f\n",fResult);

    return 0;
}

///////////////////////////////////////////////////////////////////
//
// Input:    10.0  11.0
// Output:   21.0
//
///////////////////////////////////////////////////////////////////
