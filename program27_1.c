////////////////////////////////////////////////////////////////////////////////////
//Display charcter to respective format
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

bool ChkChar(char *str, char ch)
{
  bool bAns = false;

  

  while(*str !='\0')
  {
    if((*str==ch))
    {
     bAns = true;
     break;
    }
    str++;
  }


return bAns;
 
}





int main()
{
 char Arr[20];
 char cValue = '\0';
 int iRet = 0;
 bool bRet = false;

printf("Enter string\n");
scanf("%[^'\n']s",Arr);

printf("please enter the charcater\n");
scanf(" %c",&cValue);

bRet = ChkChar(Arr, cValue);

if(bRet==true)
{
  printf("Charcter is present in it\n");
}
else
{
  printf("Charcter is not present in it\n");
}


  return 0;
}