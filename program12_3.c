///////////////////////////////////////////////////////////////////////////////////////////
//Writing a program to display
//////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

int CountTwo(int iNo)
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
 if(iNo1==2)
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

printf("Enter the first value \n");
scanf("%d",&iValue);

iRet = CountTwo(iValue);

printf("the counting of two is %d\n",iRet);

 return 0;
}