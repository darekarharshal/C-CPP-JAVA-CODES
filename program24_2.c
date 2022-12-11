////////////////////////////////////////////////////////////////////////////////////
//Display small letter to capital letter
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>



void ConvertToCapital(char ch1)
{
 char ch2 = '\0';

 ch2 = ch1-32;
 printf("The Capital letter is %c",ch2);


}










int main()
{
 char c;

printf("Enter character that you want to store\n");
scanf("%c",&c);

ConvertToCapital(c);




 return 0;
}