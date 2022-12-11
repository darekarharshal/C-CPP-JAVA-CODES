///////////////////////////////////////////////////////////////////////////////////////////
//Writing a program which accept one from user and check wheather that no is grether than 100 or not
//////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>
#include<stdbool.h>

bool ChkGreater(int iNo)
{
 if(iNo>=100)
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
 int iValue = 0;

bool bRet = false;

printf("please enter number \n");
scanf("%d",&iValue);

bRet = ChkGreater(iValue);

if(bRet == true)
{
 printf("Grater\n");
}
else
{
 printf("Smaller\n");
}


return 0;
}