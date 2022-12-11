////////////////////////////////////////////////////////////////////////////////////
//Display charcter to respective format
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(char ch1)
{
  if(ch1>=65&&ch1<=122)
  {
  printf("the decimain conversion is %d\n",ch1);
  printf("The octal conversion is %s\n",ch1);
  printf("The hexadecimal conversion is %x\n",ch1);
  }
}



int main()
{
 char ch = '\0';

 printf("Enter the charcter that you want to display in the specific format\n");
 scanf("%c",&ch);

 Display(ch);

 return 0;
}