///////////////////////////////////////////////////////////////////////////////////////////
//Accept one no from user and display  factor in decrsing order
//////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

void FactRev(int iValue)
{
 int iCnt = 0;


for(iCnt=iValue-1; iCnt>=1; iCnt--)
{
 if((iValue%iCnt)==0)
{
 printf("%d\t",iCnt);
}
}



}


int main()
{
 int iNum = 0;
int iRet = 0;

printf("Enter no \n");
scanf("%d",&iNum);

FactRev(iNum); 



 return 0;
}