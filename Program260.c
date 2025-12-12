////////////////////////////////////////////////////////////////////////////////////
//
//  File Name   :     program260.c
//  Description :     Accept string from user  reverse the string
//                  
//  Input       :         
//  Output      :        
//  Author      :      Gitanjali Patil
//  Date        :      28/11/2025
//
////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
void strRevX(char *str)
{
 char *start =str;
 char *End =str;
 char temp='\0';

while (*End != '\0')
{
    End++;
}
End--;

while (start < End)
{
    temp=*start;
    *start=*End;
    *End=temp;

    start++;
    End--;
} 
}
int main()
{
   char Arr[50]={'\0'};
   

   printf("Enter  String:\n");
   scanf("%[^'\n']s",Arr);


   strRevX(Arr);

   printf("Updated String is :%s\n",Arr);
   
    return 0;
}