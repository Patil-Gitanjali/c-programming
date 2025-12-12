////////////////////////////////////////////////////////////////////////////////////////////////
//  File Name  :   Program222.c
//  Description :  Accept String from user and count
//                 vowels of that strings[capital &small]
//  Input :                   
//  Output :                
//  Author :       Gitanjali Patil
//  Date :          27/11/2025
// 
////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

// a  e  i  o  u

int CountVowels(char str[])  // error
{  
     int iCount = 0;
     
   while(*str != '\0')
   {    
     if((*str == 'a') || (*str == 'e') || (*str == 'i') || (*str == 'o') || (*str == 'u')) 
      ((*str == 'A') || (*str == 'E') || (*str == 'I') || (*str == 'O') || (*str == 'U'))
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

    iRet = CountVowels(Arr);

    printf("Number are Vowels are :%d\n",iRet);
     
    return 0;
}