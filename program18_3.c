////////////////////////////////////////////////////////////////////////////////////
//Accept N no from user and display below pattern
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iNo)
{
 int iValue2 = iNo;
 int iCnt = 0;

for(int iCnt = 1; iCnt<=iNo; iCnt++)
{
 printf("%d\t",iCnt);
printf("*\t");
}

}


int main()
{
 int iValue = 0;

printf("enter no of elements \n");
scanf("%d",&iValue);

Pattern(iValue);




 return 0;
}