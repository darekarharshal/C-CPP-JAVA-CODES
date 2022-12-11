///////////////////////////////////////////////////////////////////////////////////////////
//Writing a program to display grether than 50 and less than 100 then printf median
//////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

void Number(int iNo)
{
 int iNo1 = 1;
if(iNo<=0)
{
 iNo = -iNo;
}

 if(iNo==0)
{
 printf("zero\n");
}
if(iNo==1)
{
 printf("one\n");
}

if(iNo==2)
{
 printf("two\n");
}

if(iNo==3)
{
 printf("three\n");
}

if(iNo==4)
{
 printf("four\n");
}
if(iNo==5)
{
 printf("five\n");
}

if(iNo==6)
{
 printf("six\n");
}
if(iNo==7)
{
 printf("seven\n");
}
if(iNo==8)
{
 printf("eight\n");
}
if(iNo==9)
{
 printf("nine\n");
}
if(iNo>=10)
{
 printf("invalid no\n");
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