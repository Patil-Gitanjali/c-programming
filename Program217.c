////////////////////////////////////////////////////////////////////////////////////////////////
//  Fike Name  :   Program217.c
//  Description :  Problems on String
//  Input :        Hello            
//  Output :       String Length is :5            
//  Author :       Gitanjali Patil
//  Date :          27/11/2025
// 
////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int strlenX(char str[])
{  
     int iCount = 0;
     
   while(*str != '\0')
   {
        iCount++;
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

    iRet = strlenX(Arr);

    printf("String Length is :%d\n",iRet);
     
    return 0;
}