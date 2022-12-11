///////////////////////////////////////////////////////////////////////////////////////////
//Writing a program which accept three no and print its multiplication
//////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

int Multiply(int iNo1, int iNo2, int iNo3)
{
 int iAns = 0;
 
 if(iNo1==0)
{
 iNo1=1;
}
if(iNo2==0)
{
 iNo2=1;
}
if(iNo3==0)
{
 iNo3=1;
}


iAns = iNo1*iNo2*iNo3;

return iAns;
}


int main()
{
 int iValue1 = 0;
 int iValue2 = 0;
 int iValue3 = 0;
 int iRet = 0;

printf("please enter the first no that you want to multiplates\n");
scanf("%d",&iValue1);

printf("please enter the second no \n");
scanf("%d",&iValue2);

printf("please enter third no\n");
scanf("%d",&iValue3);


iRet = Multiply(iValue1, iValue2,iValue3);


printf("the multiplication of the three no is %d",iRet);




 return 0;
}