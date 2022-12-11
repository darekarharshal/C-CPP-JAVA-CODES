///////////////////////////////////////////////////////////////////////////////////////////
//Writing a program to display pattern
//////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

void Pattern(int iNo)
{
 int iNo1 = iNo;
 int iNo2 = iNo;
 if(iNo<0)
{
 iNo = -iNo;
}

for(int i =iNo1; i <=iNo; i++)
{
 printf("%d\t",i);
}
}




int main()
{
 int iValue = 0;

printf("enter no that want to display\n");
scanf("%d",&iValue);

Pattern(iValue);

 return 0;
}