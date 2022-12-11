////////////////////////////////////////////////////////////////////////////////////
//Display charcter to respective format
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>


void Display(char ch1)
{
  if(ch1>=65&&ch1<=90)
  {
    while (ch1!=90)
    {
        printf("%c\t",ch1);
        ch1++;
    }
    

  }
  else  if(ch1>=97&&ch1<=122)
  {
    while (ch1!=96)
    {
        printf("%c\t",ch1);
        ch1--;
    }
    

  }
  else
  {
    printf("Please enter valid letter\n");
  }



}









int main()
{
 char c;

printf("Enter character that you want to store and display\n");
scanf("%c",&c);

Display(c);




 return 0;
}