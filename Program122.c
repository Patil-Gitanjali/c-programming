//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description :   Array program  [using call by addresss  ds]       
//  Input :         integer
//  Output :        integer
//  Author :        Gitanjali Patil
//  Date :          13/11/2025
// 
///////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int Arr[], int iSize)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d\n",Arr[iCnt]);
    }
}

int main()
{
    int Brr[] = {10,20,30,40};

    Display(Brr,4);   // Display(100,4);

    return 0;
}