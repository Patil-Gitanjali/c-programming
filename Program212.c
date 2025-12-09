////////////////////////////////////////////////////////////////////////////////////////////////
//  Fike Name  :   Program212.c
//  Description :  Problems on String
//  Input :        Enter your name : Rahul             
//  Output :       Hello :Rahul            
//  Author :       Gitanjali Patil
//  Date :          27/11/2025
// 
////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int main()
{
     char Name[50] = {'\0'};

     printf("Enter your name :\n");
     scanf("%s",Name);

     printf("Hello :%s\n",Name);

    return 0;
}