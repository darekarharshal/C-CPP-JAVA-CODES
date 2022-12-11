///////////////////////////////////////////////////////////////////////////////////////////
//Accept one no from user and display  summation of all its non factors
//////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

int SumNonFact(int iValue)
{
 int iCnt = 0;
 int iCount = 0;


for(iCnt=1; iCnt<=iValue; iCnt++)
{
 if((iValue%iCnt)!=0)
{
iCount = iCount + iCnt;
}
}

return iCount;

}


int main()
{
 int iNum = 0;
int iRet = 0;

printf("Enter no \n");
scanf("%d",&iNum);

iRet = SumNonFact(iNum); 


printf("the sum is %d\n",iRet);


 return 0;
}