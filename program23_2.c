////////////////////////////////////////////////////////////////////////////////////
//Accept character from user and check wheather it is alphabet or not
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

bool ChkAlpha(char ch)
{
  
 if(ch<='Z'&&ch>='A')
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
 char cValue = '\0';
 bool bRet = false;

printf("enter the character that you want to check\n");
scanf("%c",&cValue);

bRet = ChkAlpha(cValue);

if(bRet == true)
{
 printf("it is Capital charcter\n");
}
else
{
 printf("it is not Capital chartcter\n");
}

 return 0;
}