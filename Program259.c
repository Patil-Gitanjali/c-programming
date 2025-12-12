////////////////////////////////////////////////////////////////////////////////////
//
//  File Name   :     program259.c
//  Description :     Accept string from user and display reverse the string
//                  
//  Input       :         
//  Output      :        
//  Author      :      Gitanjali Meghanath Patil
//  Date        :      28/11/2025
//
////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
void ReverseDisplay(char *str)
{
 char *temp=str;

  while(*str !='\0')
  {
    str++;
  }
  while (str >= temp)
  {
    printf("%c",*str);
    str--;
  }
  printf("\n");
  
  
}
int main()
{
   char Arr[50]={'\0'};
   

   printf("Enter  String:\n");
   scanf("%[^'\n']s",Arr);


   ReverseDisplay(Arr);
   
    return 0;
}