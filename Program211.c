////////////////////////////////////////////////////////////////////////////////////////////////
//  Fike Name  :   Program211.c
//  Description :  Problems on String
//  Input :                         
//  Output :         6,5              
//  Author :       Gitanjali Patil
//  Date :          27/11/2025
// 
////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<string.h>

int main()
{
    char Arr[] = {'H','e','l','l','0','\0'};

    printf("%s\n",Arr);            //Hello
    printf("%d\n",sizeof(Arr));    //6
    printf("%d\n",strlen(Arr));    //5

    return 0;
}