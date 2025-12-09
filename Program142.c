/////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name :  LinearSearch
//  Description :    Accept N number from user and Accept another number
//                   And check whether number  is present in input or not optimize code
//                  (DYNAMIC MEMORY ALLOCATION)     
//  Input :         integer
//  Output :        integer,float
//  Author :        Gitanjali Patil
//  Date :          14/11/2025
// 
///////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef int * IPTR;

///0(N)
bool LinearSearch(int Arr[], int iSize,int iNo)
{
     int iCnt = 0;

     for(iCnt= 0; iCnt < iSize; iCnt++)
     {
        if(Arr[iCnt] == iNo)
        {
           break;
        }
     }

     return (iCnt != iSize); 
}    


int main()
{   
    int iLength = 0,iCnt = 0,iValue = 0;
    bool bRet = false;
    IPTR iptr = NULL;

    printf("Enter the number of elements :\n");
    scanf("%d",&iLength);
    
    //srep 1 : Allocate the memory
    iptr = (IPTR)malloc(iLength * sizeof(int));

    if(NULL == iptr)
    {
        printf("Unable to allocate the memory\n");
        return -1;
    }
      printf("Enter the values :\n");

      for(iCnt = 0; iCnt < iLength; iCnt++)
      {
           scanf("%d",&iptr[iCnt]);
      }
      
      printf("Enter the Number to Search:\n");
      scanf("%d",&iValue);

      //step 2 : use the memory
      
      bRet = LinearSearch(iptr,iLength,iValue);
      
      if(bRet == true)
      {
        printf("%d is present in the data\n",iValue);
      }
      else
      {
        printf("%d is Not present in the data\n",iValue);
      }
      //step 3 : Free the memory
      free(iptr);


    return 0;
}