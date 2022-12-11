////////////////////////////////////////////////////////////////////////////////////
//Accept N no from user and display summation of all the digits
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Digits(int Arr[], int iLength)
{
  int iCnt = 0, iNum=0, iSum =0, iNum3 = Arr[iCnt];

for(iCnt = 0; iCnt < iLength; iCnt++)
{
int iNum2 = Arr[iCnt],iSum = 0;

while(iNum2!=0)
{
 iNum = iNum2%10;
 
iSum = iSum +iNum;


 iNum2= iNum2/10;

}
printf("%d\t",iSum);

}




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


 Digits(p,iSize);


free(p);

 return 0;
}