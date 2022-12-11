///////////////////////////////////////////////////////////////////////////////////////////
//Writing a program to display count digit between 3 and 7
//////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

int CountRange(int iNo)
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
 if((iNo1>3)&&(iNo1<7))
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

iRet = CountRange(iValue);

printf("the counting of Odd digits is  %d\n",iRet);

 return 0;
}