////////////////////////////////////////////////////////////////////////////////////
//Accept N no from user and accept and display all the elements from the range
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Range(int Arr[], int iLength,int iValue1, int iValue2)
{
 int iNum = 0;

for(iNum = 0; iNum < iLength; iNum++)
{
 if((Arr[iNum]<= iValue2)|| Arr[iNum]<=iValue1)
{
 printf("%d\t",Arr[iNum]);

}


}








}


int main()
{
 int iSize = 0; 
 int iValue1 = 0;
 int iValue2 = 0;
 int *p = NULL;
int iCnt = 0;


printf("enter no of elements \n");
scanf("%d",&iSize);

printf("Enter the starting point \n");
scanf("%d",&iValue1);

printf("enter ending point \n");
scanf("%d",&iValue2);


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


Range(p,iSize,iValue1,iValue2);

free(p);

 return 0;
}