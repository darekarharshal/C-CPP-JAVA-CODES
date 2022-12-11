////////////////////////////////////////////////////////////////////////////////////
//Accept N no from user and check that no is present or not
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Check(int Arr[], int iLength)
{

 bool bRet;
 int iCnt= 0, iValue = 0, iValue2 = 0;
 printf("enter the no that you want to check \n");
 scanf("%d",&iValue2);

for(iCnt = 0; iCnt < iLength; iCnt++)
{
 if(Arr[iCnt] == iValue2)
{
 iValue = Arr[iCnt];
 break;
}

}
 if(iValue == iValue2 )
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
printf("TRUE \n ");
else 
{
 printf("FALSE \n");
}


free(p);

 return 0;
}