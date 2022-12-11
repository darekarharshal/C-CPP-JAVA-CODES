///////////////////////////////////////////////////////////////////////////////////////////
//Accept one no from user and display multiplication of factors
//////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

int Display(int iValue)
{
 int iCnt = 1;
int iRet = 1;

for(iCnt = 1; iCnt <= iValue; iCnt++)
{
 iRet = iRet * iCnt
}

return iRet;

}


int main()
{
 int iNum = 0;
int iRet = 0;

printf("Enter no \n");
scanf("%d",&iNum);

iRet = Display(iNum); 

printf("output is %d " iRet);

 return 0;
}