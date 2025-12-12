/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  File Name  :   Program230.c
//  Description :  Accept string from user and count
//                  number of capital and small characters of it
//  Input :                    
//  Output :                   
//  Author :       Gitanjali Patil
//  Date :          27/11/2025
// 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void CountAll(char str[])
{  
     int iCountSmall = 0;
     int iCountCapital = 0;
     
   while(*str != '\0')
   {    
     if((*str >= 'A') && (*str <= 'Z'))
     {
        iCountCapital;
     }
     else
     {
        iCountSmall;
     }
        str++;
   }  
    printf("Number of Small characters :%d\n",iCountSmall);
    printf("Number of Capital characters :%d\n",iCountCapital);
}
int main()
{
     char Arr[50] = {'\0'};

     printf("Enter String :\n");
     scanf("%[^'\n']s",Arr);

    CountAll(Arr);


    return 0;
}