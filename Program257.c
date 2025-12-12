////////////////////////////////////////////////////////////////////////////////////
//
//  File Name   :     program257.c
//  Description :     Accept string from user and copy it into another string
//                  
//  Input       :         
//  Output      :        
//  Author      :      Gitanjali Meghanath Patil
//  Date        :      28/11/2025
//
////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

void strcpyX(char *src, char *dest)
{
    while(*src != '\0')
    {
        *dest = *src;
        src++;
        dest++;
    }

    *dest = '\0';
}

int main()
{
    char Arr[50] = {'\0'};
    char Brr[50] = {'\0'};

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    strcpyX(Arr,Brr);

    printf("Copied string is : %s\n",Brr);

    return 0;
}