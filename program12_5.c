///////////////////////////////////////////////////////////////////////////////////////////
//Writing a program to display
//////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

int Count(int iNo)
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
 if(iNo1<6)
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

iRet = Count(iValue);

printf("the counting of less than is %d\n",iRet);

 return 0;
}