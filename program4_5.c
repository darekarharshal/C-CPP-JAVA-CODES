///////////////////////////////////////////////////////////////////////////////////////////
//Accept one no from user and display  diff of all its non factors and factors
//////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

int FactDiff(int iValue)
{
 int iCnt = 0;
 int iCount = 0, iCount1 =iValue,iCount2 = 0;


for(iCnt=1; iCnt<=iValue; iCnt++)
{
 if((iValue%iCnt)!=0)
{
iCount1 = iCount1 + iCnt;
}
else
{
 iCount2 = iCount2 +iCnt;
}
}
iCount = iCount2 - iCount1;
return iCount;

}


int main()
{
 int iNum = 0;
int iRet = 0;

printf("Enter no \n");
scanf("%d",&iNum);

iRet = FactDiff(iNum); 


printf("the sum is %d\n",iRet);


 return 0;
}