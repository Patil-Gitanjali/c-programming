////////////////////////////////////////////////////////////////////////////////////////////////
//  File Name  :   Program227.c
//  Description :  Accept Character from user and count
//                 Ocurrence of it
//  Input :                    
//  Output :                   
//  Author :       Gitanjali Patil
//  Date :          27/11/2025
// 
////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int CountSmall(char str[])
{  
     int iCount = 0;
     
   while(*str != '\0')
   {    
     if((*str >= 97) && (*str <= 122))
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
     char cValue = '\0';

     printf("Enter String :\n");
     scanf("%[^'\n']s",Arr);

    iRet = CountSmall(Arr);

    printf("Number are Small characters are :%d\n",iRet);
     
    return 0;
}