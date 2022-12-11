////////////////////////////////////////////////////////////////////////////////////
//Accept N no from user and return largest number
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int Maximum(int Arr[], int iLength)
{
 int iNum = 0;
int iRet1 = 0;

for(iNum = 0; iNum < iLength; iNum++)
{
 if(Arr[iNum] > iRet1)
{
 iRet1 = Arr[iNum];
}

}





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


iRet = Maximum(p,iSize);

printf("the maximum no is %d \n",iRet);
free(p);

 return 0;
}