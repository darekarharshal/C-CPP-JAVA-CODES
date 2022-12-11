////////////////////////////////////////////////////////////////////////////////////
//Accept N no from user and return diffrance between summation of even and summation of odd no
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[], int iLength)
{

int iSum1 =0, iSum2 = 0, iValue =0;
  for(int iCnt =0; iCnt < iLength; iCnt++)
{
 if(Arr[iCnt] % 2 ==0)
{
 iSum1 = iSum1 + Arr[iCnt];
}
else
{
iSum2 = iSum2 + Arr[iCnt];
}

}

 iValue = iSum1- iSum2;

 return iValue;
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


iRet = Difference(p , iSize);

printf("result is %d\n ",iRet);

free(p);

 return 0;
}