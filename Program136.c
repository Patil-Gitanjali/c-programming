//dynamic memory allocation
///accept n no from user  and accept another no and check whether frequency  of u want
//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name :  FrequencyCalculate
//  Description :    Accept N number from user and Check Frequency of you want
//                  (DYNAMIC MEMORY ALLOCATION)     
//  Input :         integer
//  Output :        integer,float
//  Author :        Gitanjali Patil
//  Date :          14/11/2025
// 
///////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

typedef int * IPTR;

int FrequencyCalculate(int Arr[], int iSize,int iNo)
{
     int iCnt = 0,iCount= 0;

     for(iCnt= 0; iCnt < iSize; iCnt++)
     {
        if(Arr[iCnt] ==iNo)
        {
           iCount++;
        }
     }
     return iCount;
}

int main()
{   
    int iLength = 0,iCnt = 0, iRet = 0,iValue = 0;
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
      
      printf("Enter the Number to Calculate Frequency :\n");
      scanf("%d",&iValue);

      //step 2 : use the memory
      
      iRet = FrequencyCalculate(iptr,iLength,iValue);
      printf("Frequency of %d is :%d\n",iValue,iRet);

      //step 3 : Free the memory
      free(iptr);


    return 0;
}