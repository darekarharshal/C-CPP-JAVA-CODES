///////////////////////////////////////////////////////////////////////////////////////////
//Writing a program to display factors
//////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

int Number(int iNo)
{
 int iNo1 = 1;
 int iRet = 0;
if(iNo<=0)
{
 iNo = -iNo;
}

 for(int i = iNo; i>=1; i--)
{
 iNo1 = iNo1*i;
}

iRet = iNo1;
return iRet;
}




int main()
{
 int iValue = 0,iRet = 0;

printf("enter no that want to display\n");
scanf("%d",&iValue);

iRet = Number(iValue);

 printf("the factorial no is %d\n",iRet);

 return 0;
}