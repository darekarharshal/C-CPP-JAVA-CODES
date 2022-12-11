///////////////////////////////////////////////////////////////////////////////////////////
//Writing a program to display even factorial of given no
//////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

int EvenFactorial(int iNo)
{
int iRet1 = 0;
int iNo1 = 1;
 
if(iNo<=0)
{
 iNo = -iNo;
}

 for(int i = iNo; i>=1; i--)
{
 if(i%2==0)
{
 iNo1 = iNo1*i;
}
}
 
return iNo1;
}




int main()
{
 int iValue = 0;
 int iRet = 0;

printf("enter no that want to display \n");
scanf("%d",&iValue);

 iRet = EvenFactorial(iValue);

printf("the even factorial is %d\n",iRet);


 return 0;
}