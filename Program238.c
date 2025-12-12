/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Fike Name  :   Program237.c
//  Description :  Accept String from user and Replace every small character with _
//  Input :                    
//  Output :                   
//  Author :       Gitanjali Patil
//  Date :          27/11/2025
// 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void struprX(char str[])
{  
     
   while(*str != '\0')
   {    
     if(*str >= 'a' && *str <= 'z')
     {
        *str = *str - 32;
     }
        str++;
   }  
} 
int main()
{
     char Arr[50] = {'\0'};

     printf("Enter String :\n");
     scanf("%[^'\n']s",Arr);

    struprX(Arr);

    printf("Updated string is :%s\n",Arr);

    return 0;
}