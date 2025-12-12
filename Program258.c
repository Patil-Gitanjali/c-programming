////////////////////////////////////////////////////////////////////////////////////
//
//  File Name   :     program258.c
//  Description :     Accept string from user and concate it into another string
//                  
//  Input       :         
//  Output      :        
//  Author      :      Gitanjali Meghanath Patil
//  Date        :      28/11/2025
//
////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

void strcatX(char *src, char *dest)
{
    while(*dest != '\0')
    {
        dest++;
    }

    while(*src != '\0')
    {
        *dest = *src;
        src++;
        dest++;
    }

    *dest = '\0';   // *dest = *src;
}

int main()
{
    char Arr[50] = {'\0'};
    char Brr[50] = {'\0'};

    printf("Enter source string : \n");
    scanf("%[^'\n']s",Arr);

    printf("Enter destination string : \n");
    scanf(" %[^'\n']s",Brr);

    strcatX(Arr,Brr);

    printf("Updated string is : %s\n",Brr);

    return 0;
}