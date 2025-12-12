////////////////////////////////////////////////////////////////////////////////////////////////
//  File Name  :   Program228.c
//  Description :  Accept string from user and count
//                 number of small characters of it
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
     if((*str >= 'a') && (*str <= 'z'))
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