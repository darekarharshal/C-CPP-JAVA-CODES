////////////////////////////////////////////////////////////////////////////////////
//Display charcter to respective format
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int CountWhite(char *str)
{
  int iCnt = 0;

  

  while(*str !='\0')
  {
    if((*str==' '))
    {
      iCnt++;
    }
    str++;
  }


return iCnt;
 
}





int main()
{
 char arr[20];
 int iRet = 0;

 printf("Enter string\n");
 scanf("%[^'\n']s",arr);


iRet = CountWhite(arr);

 printf("output is %d\n",iRet);

  return 0;
}