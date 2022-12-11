///////////////////////////////////////////////////////////////////////////////////////////
//Writing a program to display pattern
//////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

void Pattern(int iNo)
{
 
 if(iNo<0)
{
 iNo = -iNo;
}


for(int i = 1; i<=iNo; i++)
{
 printf("$\t");
 printf("*\t");
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