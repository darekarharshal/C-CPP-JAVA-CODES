///////////////////////////////////////////////////////////////////////////////////////////
//Writing a program to display count of odd digits
//////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

int CountOdd(int iNo)
{

 int iNo1 = 0;
int iCnt = 0;

if(iNo<0)
{
 iNo = -iNo;
}
 
while(iNo!=0)
{

 iNo1 = iNo%10;
 if(iNo1%2!=0)
{
 iCnt++;
}
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

iRet = CountOdd(iValue);

printf("the counting of Odd digits is  %d\n",iRet);

 return 0;
}