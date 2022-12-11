////////////////////////////////////////////////////////////////////////////////////
//Accept N no from user and display all such no which contains 3 digit in it
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Digits(int Arr[], int iLength)
{
  int iCnt = 0;

for(iCnt =0; iCnt < iLength; iCnt++)
{
  if(Arr[iCnt]>99 && Arr[iCnt]<1000)
{
  printf("%d\t",Arr[iCnt]);
}
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