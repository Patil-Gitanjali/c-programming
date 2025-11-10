/*
   step 1 : understand the problem statement
   step 2 : write the algorithem
   step 3 : Decide the programming Language
   step 4 :  write the program
   step 5 :  Test the program

*/
/*
  Algorithm

  START
      Accept first number as no1
      Accept second number as no2
      perform Addition of no1 and no2
      Display the addition on screen
  STOP
  
*/
#include<stdio.h>
float AdditionTwoNumbers(float fNo1, float fNo2)
{
    int fsum = 0.0f;
    fsum = fNo1+ fNo2;  //Bussiness Logic
    return fsum;
}
int main()
{
     float fValue1 = 0.0f,fValue2 = 0.0f,fRet = 0.0f;

    printf("Enter first number:\n");
    scanf("%f",&fValue1);

    printf("Enter second number:\n");
    scanf("%f",&fValue2);

    fRet = AdditionTwoNumbers(fValue1,fValue2);

     printf("Addition is:%f\n",fRet);


    return 0;
}