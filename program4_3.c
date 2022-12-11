///////////////////////////////////////////////////////////////////////////////////////////
//Accept one no from user and display non factor 
//////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

void NonFact(int iValue)
{
 int iCnt = 0;


for(iCnt=1; iCnt<=iValue; iCnt++)
{
 if((iValue%iCnt)!=0)
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

NonFact(iNum); 



 return 0;
}