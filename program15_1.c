////////////////////////////////////////////////////////////////////////////////////
//Accept N no from user and return frequancy of even no
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr[], int iLength)
{

 int iValue =0;

 for(int iCnt =0; iCnt < iLength; iCnt++)
 
{
 if(Arr[ iCnt] % 2 ==0 )
{
 iValue++;
}


}

return iValue++; 

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


iRet = CountEven(p , iSize);

printf("no of even no are %d \n ",iRet);


free(p);

 return 0;
}