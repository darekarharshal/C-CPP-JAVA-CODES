///////////////////////////////////////////////////////////////////////////////////////////
//Writing a program to display pattern
//////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

void Display(int iNo)
{

 
if(iNo<=0)
{
 iNo = -iNo;
}
 int iNo1 = iNo;

for(int i = 1; i<=iNo; i++)
{
 printf("*\t");

}
for(int i = 1; i<=iNo; i++)
{

 printf("#\t");
}
 
}




int main()
{
 int iValue = 0;

printf("enter no that want to display table\n");
scanf("%d",&iValue);

 Display(iValue);


 return 0;
}