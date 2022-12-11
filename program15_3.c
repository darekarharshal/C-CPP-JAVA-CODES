////////////////////////////////////////////////////////////////////////////////////
//Accept N no from user and check that no contains 11 or not
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Check(int Arr[], int iLength)
{

 bool bRet;
 int iCnt= 0, iValue = 0;

for(iCnt = 0; iCnt < iLength; iCnt++)
{
 if(Arr[iCnt] == 11)
{
 iValue = Arr[iCnt];
 break;
}

}
 if(iValue == 11 )
{
 bRet = true;
}
else
{
bRet = false;
}

return bRet;
}


int main()
{
 int iSize = 0, iRet = 0, iCnt = 0;
 int *p = NULL;
bool bRet;

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


bRet = Check(p , iSize);

if(bRet == true)
printf("no 11 presunt \n ");
else 
{
 printf("no 11 is not present");
}


free(p);

 return 0;
}