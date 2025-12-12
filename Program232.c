/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  File Name  :   Program232.c
//  Description :  Accept string from user and count
//                  digits of it
//  Input :                    
//  Output :                   
//  Author :       Gitanjali Patil
//  Date :          27/11/2025
// 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void CountDigits(char str[])
{  
     int iCount = 0;
     
   while(*str != '\0')
   {    
     if((*str >= 48) && (*str <= 57))
     {
        iCount++;
     }
        str++;
   }  
    printf("Number of digits :%d\n",iCount);
}  
int main()
{
     char Arr[50] = {'\0'};

     printf("Enter String :\n");
     scanf("%[^'\n']s",Arr);

    CountDigits(Arr);

    return 0;
}