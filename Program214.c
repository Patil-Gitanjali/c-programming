////////////////////////////////////////////////////////////////////////////////////////////////
//  Fike Name  :   Program214.c
//  Description :  Problems on String
//  Input :        Hello            
//  Output :       H
//                 e
//                 l
//  Author :       Gitanjali Patil
//  Date :          27/11/2025
// 
////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(char *str)
{  
   printf("%c\n",*str);
   str++;
   printf("%c\n",*str);
   str++;
   printf("%c\n",*str);

}

int main()
{
     char Arr[50] = {'\0'};

     printf("Enter String :\n");
     scanf("%[^'\n']s",Arr);

    Display(Arr);
     
    return 0;
}