////////////////////////////////////////////////////////////////////////////////////////////////
//  Fike Name  :   Program218.c
//  Description :  Accept String from user and count Accuracy 
//  Input :        Hello            
//  Output :       String Length is :5            
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
     if(*str == 'a')
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