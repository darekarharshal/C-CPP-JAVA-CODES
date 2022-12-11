////////////////////////////////////////////////////////////////////////////////////
//Accept N no from user and accept one another number as NO and return last index of that no
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int LastOcc(int Arr[], int iLength)
{

 int iRet1 = 0;
 int iCnt= 0, iValue = 0, iValue2 = 0;
 printf("enter the no that you want to check \n");
 scanf("%d",&iValue2);

for(iCnt = 0; iCnt < iLength; iCnt++)
{
 if(Arr[iCnt] == iValue2)
{
  iRet1 = iCnt;
  
}


}



}



return iRet1;
}


int main()
{
 int iSize = 0, iRet = 0, iCnt = 0;
 int *p = NULL;


printf("enter no of elements \n");
scanf("%d",&iSize);

p = (int *)malloc(iSize * sizeof(int));

if(p == NULL)
{
 printf("unable to allocate memory\n");
 return -1;
}

printf("enter the %d elemnts ",iSize);

for(iCnt = 0; iCnt< iSize; iCnt++)
{
 printf("enter element %d : \n", iCnt + 1);
 scanf("%d",&p[iCnt]);
}


iRet = LastOcc(p , iSize);

printf(" %d \n", iRet);


free(p);

 return 0;
}