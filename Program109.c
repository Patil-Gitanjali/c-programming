//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : 
//  Description :   Array program to print size of array             
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

    printf("%d\n",Arr);
    printf("%d\n",&Arr);
    printf("%d\n",&(Arr[0]));

    printf("%lu\n",sizeof(Arr));

    return 0;
}