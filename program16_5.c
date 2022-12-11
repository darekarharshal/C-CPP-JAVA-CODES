////////////////////////////////////////////////////////////////////////////////////
//Accept N no from user and accept and display product of odd no 
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int Product(int Arr[], int iLength)
{
 int iNum = 0;
int iRet1 = 1;

for(iNum = 0; iNum < iLength; iNum++)
{
 if(Arr[iNum] % 2 != 0)
{
 iRet1 = Arr[iNum] * iRet1;
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


iRet = Product(p,iSize);

if(iRet % 3 ==0)
{
printf("Output is %d\n ",iRet);
}
else
{
 printf("output is 0\n");
}
free(p);

 return 0;
}