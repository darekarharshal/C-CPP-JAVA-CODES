////////////////////////////////////////////////////////////////////////////////////
//Accept character from user and check wheather it is small case or not
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

bool ChkAlpha(char ch)
{
  
 if(ch<='z'&&ch>='a')
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
 printf("it is samll case\n");
}
else
{
 printf("it is not small case\n");
}

 return 0;
}