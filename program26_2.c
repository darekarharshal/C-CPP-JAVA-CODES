////////////////////////////////////////////////////////////////////////////////////
//Display charcter to respective format
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void struprX(char *str)
{
  int iCnt = 0;

  

  while(*str !='\0')
  {
    if((*str>='a')&&(*str<='z'))
    {
      *str=*str-32;
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


 struprX(arr);

 printf("output is %s\n",arr);

  return 0;
}