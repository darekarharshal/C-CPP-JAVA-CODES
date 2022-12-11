////////////////////////////////////////////////////////////////////////////////////
//Display charcter to respective format
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void strtoggleX(char *str)
{
  int iCnt = 0;

  

  while(*str !='\0')
  {
    if((*str>='a')&&(*str<='z'))
    {
      *str=*str-32;
    }
    else if((*str>='A')&&(*str<='Z'))
    {
      *str=*str+32;
    }
    str++;
  }



 
}





int main()
{
 char arr[20];
 int iRet = 0;

 printf("Enter string\n");
 scanf("%[^'\n']s",arr);


 strtoggleX(arr);

 printf("output is %s\n",arr);

  return 0;
}