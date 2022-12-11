///////////////////////////////////////////////////////////////////////////////////////////
//Writing a program to display count multiplication
//////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

int MultiDigits(int iNo)
{

 int iNo1 = 0;
int iCnt = 1;

if(iNo<0)
{
 iNo = -iNo;
}
 
while(iNo!=0)
{

 iNo1 = iNo%10;
 if(iNo1==0)
{
 iNo1=1;
}
 iCnt = iCnt*iNo1;

 iNo = iNo/10;
}

return iCnt;

}


int main()
{
 int iValue =0;
 int iRet = 0;

printf("Enter the  value \n");
scanf("%d",&iValue);

iRet = MultiDigits(iValue);

printf("the multiplicatio of digits is  %d\n",iRet);

 return 0;
}