//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : 
//  Description :   Array program to print the values of array           
//  Input :         integer
//  Output :        integer
//  Author :        Gitanjali Patil
//  Date :          13/11/2025
// 
///////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

int main()
{
    int Arr[] = {10,20,30,40};
    int iCnt = 0;

    for(iCnt = 0; iCnt < 4; iCnt++)
    {
        printf("%d\n",Arr[iCnt]);
    }

    return 0;
}