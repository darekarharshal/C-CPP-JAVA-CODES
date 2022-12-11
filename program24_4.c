////////////////////////////////////////////////////////////////////////////////////
//Display charcter to respective format
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

bool ChkSpecial(char ch1)
{
 bool bRet1 = false;

 if(ch1>=33&&ch1<=63)
 {
  bRet1=true;
 }
 else
 {
  bRet1=false;
 }

 return bRet1;

}









int main()
{
 char c;
bool bRet = false;
printf("Enter character that you want to check\n");
scanf("%c",&c);

bRet = ChkSpecial(c);

if(bRet==true)
{
  printf("It is a special letter\n");
}
else
{
  printf("it is not a special letter\n");
}






 return 0;
}