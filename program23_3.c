////////////////////////////////////////////////////////////////////////////////////
//Accept character from user and check wheather it is alphabet or not
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

bool ChkAlpha(char ch)
{
  
 if(ch<='9'&&ch>='0')
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
 printf("it is digit\n");
}
else
{
 printf("it is not digit\n");
}

 return 0;
}