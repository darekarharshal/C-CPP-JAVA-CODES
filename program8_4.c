///////////////////////////////////////////////////////////////////////////////////////////
//Writing a program to display table
//////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

void table(int iNo)
{

 
if(iNo<=0)
{
 iNo = -iNo;
}
 int iNo1 = iNo;

for(int i = 1; i<=10; i++)
{
 iNo = iNo1*i;
  printf("%d\t",iNo);
}

 
}




int main()
{
 int iValue = 0;

printf("enter no that want to display table\n");
scanf("%d",&iValue);

 table(iValue);


 return 0;
}