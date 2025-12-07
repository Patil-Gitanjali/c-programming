//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name :  FrequencyCalculate
//  Description :    Accept N number from user and find out Frequency of 11
//                  (DYNAMIC MEMORY ALLOCATION)     
//  Input :         integer
//  Output :        integer,float
//  Author :        Gitanjali Patil
//  Date :          14/11/2025
// 
/////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

typedef int * IPTR;
int FrequencyCalculate(int Arr[], int iSize)
{
     int iCnt = 0,iCount= 0;

     for(iCnt= 0;iCnt < iSize; iCnt++)
     {
        if(Arr[iCnt] == 11)
        {
           iCount++;
        }
     }
     return iCount;
}

int main()
{   
    int iLength = 0,iCnt = 0, iRet = 0;
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

      //step 2 : use the memory
      
      iRet = FrequencyCalculate(iptr,iLength);
      printf("Frequency of 11 is :%d\n",iRet);

      //step 3 : Free the memory
      free(iptr);


    return 0;
}