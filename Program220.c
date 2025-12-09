////////////////////////////////////////////////////////////////////////////////////////////////
//  File Name  :   Program220.c
//  Description :   Accept String from user and count
//                  Occurences of 'A'or 'a' in that String 
//  Input :                   
//  Output :                  
//  Author :       Gitanjali Patil
//  Date :          27/11/2025
// 
////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int Count(char str[])
{  
     int iCount = 0;
     
   while(*str != '\0')
   {    
     if(*str == 'A' || *str == 'a')
     {
        iCount++;
     }
        str++;
   }  
   return iCount; 
}

int main()
{
     char Arr[50] = {'\0'};

     int iRet = 0;

     printf("Enter String :\n");
     scanf("%[^'\n']s",Arr);

    iRet = Count(Arr);

    printf("Count of a :%d\n",iRet);
     
    return 0;
}