////////////////////////////////////////////////////////////////////////////////////
//Accept N no from user and return difference between  largest number and smallest
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int Minimum(int Arr[], int iLength)
{
 int iNum = 0;
int iRet1 = 0;
int iMin = Arr[0];
int iMax = 0;

for(iNum = 0; iNum < iLength; iNum++)
{

if(Arr[iNum] > iMax) 
{
 iMax = Arr[iNum];
}

if(Arr[iNum] < iMin)
{
 iMin = Arr[iNum];
}
}


iRet1 = iMax - iMin;


return iRet1;


}


int main()
{
 int iSize = 0; 
 int *p = NULL;
int iCnt = 0;
int iRet = 0;

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


iRet = Minimum(p,iSize);

printf("the diiference is  %d \n",iRet);
free(p);

 return 0;
}