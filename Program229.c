/////////////////////////////////////////////////////////////////
//
//  File Name :     program229.c
//  Description :   Accept string from user and count
//                  number of capital characters of it
//  Input :         
//  Output :         
//  Author :        Gitanjali Meghanath Patil
//  Date :          27/11/2025
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>

int CountCaptital(char str[])
{  
     int iCount = 0;
     
   while(*str != '\0')
   {    
     if((*str >= 'A') && (*str <= 'Z'))
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

    iRet = CountCaptital(Arr);

    printf("Number are Capital characters are :%d\n",iRet);
     
    return 0;
}