/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  File Name  :   Program234.c
//  Description :  Accept String from user and Replace every small character with _
//  Input :                    
//  Output :                   
//  Author :       Gitanjali Patil
//  Date :          27/11/2025
// 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Change(char str[])
{  
     
   while(*str != '\0')
   {    
     if(*str >= 'a' && *str <= 'z')
     {
        *str = '_';
     }
        str++;
   }  
} 
int main()
{
     char Arr[50] = {'\0'};

     printf("Enter String :\n");
     scanf("%[^'\n']s",Arr);

    Change(Arr);

    printf("Updated string is :%s\n",Arr);

    return 0;
}