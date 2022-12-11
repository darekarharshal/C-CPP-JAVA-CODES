///////////////////////////////////////////////////////////////////////////////////////////
//Writing a program to display its digits in revese
//////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

void DisplayDigit(int iNo)
{

 int iNo1 = 0;

if(iNo<0)
{
 iNo = -iNo;
}
 
while(iNo!=0)
{
 iNo1 = iNo%10;
 printf("%d\n",iNo1);
 iNo = iNo/10;
}



}


int main()
{
 int iValue =0;
 int iRet = 0;

printf("Enter the first value \n");
scanf("%d",&iValue);

DisplayDigit(iValue);

 return 0;
}