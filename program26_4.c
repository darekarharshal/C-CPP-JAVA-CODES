////////////////////////////////////////////////////////////////////////////////////
//Display charcter to respective format
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayDigit(char *str, char *str1)
{
  int iCnt = 0;
 

  

  while(*str !='\0')
  {
    if((*str>='0')&&(*str<='9'))
    {
      *str;
    }
    else
    {
      *str=' ';
    }
    
    str++;
    str1++;
  }



 
}





int main()
{
 char arr[20];
 char brr[20];
 int iRet = 0;

 printf("Enter string\n");
 scanf("%[^'\n']s",arr);


 DisplayDigit(arr,brr);

 printf("output is %s\n",arr);

  return 0;
}