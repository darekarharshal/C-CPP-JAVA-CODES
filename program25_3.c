////////////////////////////////////////////////////////////////////////////////////
//Display charcter to respective format
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int Difference(char *str)
{
  int iCnt1 = 0,iCnt2 = 0;
  int iCnt = 0;

  if(*str =='\0')
  {
    return 0;
  }
  

  while(*str !='\0')
  {
    if((*str>='a')&&(*str<='z'))
    {
      iCnt1++;
    }
    else if((*str>='A')&&(*str<='Z'))
    {
      iCnt2++;
    }
    str++;
  }


iCnt = iCnt1-iCnt2;

if(iCnt<0)
{
  iCnt = -iCnt;
}

  return iCnt;
}





int main()
{
 char arr[20];
 int iRet = 0;

 printf("Enter string\n");
 scanf("%[^'\n']s",arr);


 iRet = Difference(arr);

 printf("No of Difference between letter is %d\n",iRet);

  return 0;
}