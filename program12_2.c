///////////////////////////////////////////////////////////////////////////////////////////
//Writing a program to display 
//////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>
#include<stdbool.h>

bool ChkZero(int iNo)
{

 int iNo1 = 0;
 int i = 0;

if(iNo<0)
{
 iNo = -iNo;
}
 
while(iNo!=0)
{
 iNo1 = iNo%10;
 if(iNo1==0)
{
 i++; 
break;
}
iNo = iNo/10;
}

if(iNo == 0)
{
 return false;
}
else if(iNo!=0)
{
 return true;
}



}


int main()
{
 int iValue =0;
bool bRet;

printf("Enter the first value \n");
scanf("%d",&iValue);

bRet = ChkZero(iValue);

if(bRet == true)
{
 printf("there is contains zero\n");
}
else
{
 printf("there is no zero\n");
}

 return 0;
}