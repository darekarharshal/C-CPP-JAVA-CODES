///////////////////////////////////////////////////////////////////////////////////////////
//Writing a program to display corrosponding indian currency 
//////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

int DollarToINR(int iNo)
{
int iRet1 = 0;
 
if(iNo<=0)
{
 iNo = -iNo;
}

iRet1 = iNo*70;

return iRet1;
 
}




int main()
{
 int iValue = 0;
 int iRet = 0;

printf("enter no that want to display table\n");
scanf("%d",&iValue);

 iRet = DollarToINR(iValue);

printf("the indian rs is %d\n",iRet);


 return 0;
}