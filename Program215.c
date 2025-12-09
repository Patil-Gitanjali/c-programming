////////////////////////////////////////////////////////////////////////////////////////////////
//  Fike Name  :   Program215.c
//  Description :  Problems on String
//  Input :        Hello            
//  Output :       H
//                 e
//                 l
//                 l
//                 o
//  Author :       Gitanjali Patil
//  Date :          27/11/2025
// 
////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(char *str)
{  
   while(*str != '\0')
   {
        printf("%c\n",*str);
        str++;
   
   }
   
}

int main()
{
     char Arr[50] = {'\0'};

     printf("Enter String :\n");
     scanf("%[^'\n']s",Arr);

    Display(Arr);
     
    return 0;
}