////////////////////////////////////////////////////////////////////////////////////////////////
//Accept number from user and check wheather number is even or odd
/////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

int CheckEvenOdd(int iNo)
{
 int iCheck = 0;;
 if(iNo % 2 == 0)
{
 return 0;
}
else 
{
 return 1;
}


}





int main()
{
 int iValue = 0; 
 int iNum = 0;
 int iRet = 0;


 printf("Enter the no that you want to check weather it is odd or even \n");
 scanf("%d",&iValue);

 iRet = CheckEvenOdd(iValue);
 
 if(iRet = 1)
{
 printf("%d is a odd number\n",iValue);
}
else
{
 printf("%d is a even number\n",iValue);
}


 return 0;
}