///////////////////////////////////////////////////////////////////////////////////////////
//Writing a program to display diff betweem sum of even and odd
//////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

int CountDiff(int iNo)
{

 int iNo1 = 0;
int iCnt = 0;
int iCnt1 =0, iCnt2 = 0;

if(iNo<0)
{
 iNo = -iNo;
}
 
while(iNo!=0)
{

 iNo1 = iNo%10;
 if((iNo1%2)==0)
{
 iCnt1 = iCnt1 + iNo1;
}
else
{
 iCnt2 = iCnt2 + iNo1;
}
 

 iNo = iNo/10;
}

iCnt = iCnt1-iCnt2;
return iCnt;

}


int main()
{
 int iValue =0;
 int iRet = 0;

printf("Enter the  value \n");
scanf("%d",&iValue);

iRet = CountDiff(iValue);

printf("the diff of digits is  %d\n",iRet);

 return 0;
}