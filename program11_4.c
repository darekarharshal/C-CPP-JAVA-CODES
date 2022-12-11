///////////////////////////////////////////////////////////////////////////////////////////
//Writing a program to display range no form that get by the user 
//////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

int  RangeSum(int iStart,int iEnd)
{

 int iNo = 0;

if(iStart<0||iEnd<0)
{
 return -1;
}

 for(int i = iStart; i<=iEnd; i++)
{
 if(i%2==0)
{  
iNo = iNo+i;
 
}
}

return iNo;
}


int main()
{
 int iValue1 =0, iValue2 = 0;
 int iRet = 0;

printf("Enter the first value form that your range is stariting\n");
scanf("%d",&iValue1);

printf("Enter the second value form that your range is stariting\n");
scanf("%d",&iValue2);

 iRet = RangeSum(iValue1,iValue2);

if(iRet>=0)
{ 
printf("the output is %d\n",iRet);
}
else
{
 printf("Invalid Range\n");
}


 return 0;
}