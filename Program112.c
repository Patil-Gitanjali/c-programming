//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : 
//  Description :   Array program to print the elements of array using for loop            
//  Input :         integer
//  Output :        integer
//  Author :        Gitanjali Patil
//  Date :          13/11/2025
// 
///////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

void Display(int *ptr)   //Issue
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < 4; iCnt++)
    {
        printf("%d\n",*ptr);
    }
}
int main()
{
    int Arr[] = {10,20,30,40};
    
    Display(Arr);  //Display(100);

    return 0;
}