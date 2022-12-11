////////////////////////////////////////////////////////////////////////////////////
//Accept N no from user and displayy all such elements which are divisible by 5 and which are even
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[], int iLength)
{

 int iValue =0;
printf("no which is divisible by 5 aand even is \n");

 for(int iCnt =0; iCnt < iLength; iCnt++)
 
{
 if(Arr[ iCnt] % 5 ==0 && Arr[iCnt] % 2 ==0)
{
 printf("%d\t",Arr[iCnt]);
}


}

 

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


Display(p , iSize);



free(p);

 return 0;
}