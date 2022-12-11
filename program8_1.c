///////////////////////////////////////////////////////////////////////////////////////////
//Writing a program to display grether than 50 and less than 100 then printf median
//////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

void Number(int iNo)
{
 int iNo1 = 1;
 if(iNo<50)
{
 printf("small\n");
}
if(iNo<=100)
{
 printf("medium\n");
}

if(iNo>100)
{
 printf("grether\n");
}
}




int main()
{
 int iValue = 0;

printf("enter no that want to display\n");
scanf("%d",&iValue);

Number(iValue);

 return 0;
}