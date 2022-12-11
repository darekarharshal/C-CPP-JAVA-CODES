////////////////////////////////////////////////////////////////////////////////////
//Display charcter to respective format
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

bool ChkVowel(char *str)
{
  bool bAns1 = false;
  bool bAns2 = false;

  while(*str!='\0')
  {
    if(*str>='A'&&*str<='Z')
    {
      *str = *str + 32;
    }


    if(*str=='a'||*str=='e'||*str=='i'||*str=='o'||*str=='u')
    {
      bAns1 = true;
     
    }
    else
    {
      bAns2 = false;
    }
   str++;
  }

  return bAns1;
}




int main()
{
 char arr[20];

 bool bRet = false;

 printf("Please Enter the String\n");
 scanf("%[^'\n']s",arr);

 bRet = ChkVowel(arr);

 if(bRet == true)
 {
  printf("It contains vowels\n");
 }
 else
 {
  printf("There is no vowel\n");
 }


  return 0;
}