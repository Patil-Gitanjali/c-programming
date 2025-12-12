/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  File Name  :   Program234.c
//  Description :  Accept string from user and count
//                  no of WhiteSpaces of it
//  Input :                    
//  Output :                   
//  Author :       Gitanjali Patil
//  Date :          27/11/2025
// 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void CountSpace(char str[])
{  
     int iCount = 0;
     
   while(*str != '\0')
   {    
     if(*str == ' ')
     {
        iCount++;
     }
        str++;
   }  
    printf("Number of Spaces :%d\n",iCount);
}  
int main()
{
     char Arr[50] = {'\0'};

     printf("Enter String :\n");
     scanf("%[^'\n']s",Arr);

    CountSpace(Arr);

    return 0;
}