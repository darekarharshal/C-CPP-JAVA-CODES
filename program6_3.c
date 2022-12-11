///////////////////////////////////////////////////////////////////////////////////////////
//Writing a program which accept two no and check wheather no are equal or not
//////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>
#include<stdbool.h>

bool ChkEqual(int iNo1,int iNo2)
{
 if(iNo1==iNo2)
{
 return true;
}
else
{
 return false;
}


}



int main()
{
 int iValue1= 0,iValue2 =0;
bool bRet = false;

printf("Enter the first no \n");
scanf("%d",&iValue1);

printf("Enter the second no \n");
scanf("%d",&iValue2);

bRet = ChkEqual(iValue1,iValue2);


if(bRet==true)
{
 printf("the  is equal\n");
}
else
{
 printf("the no is not same\n");
}


 return 0;
}