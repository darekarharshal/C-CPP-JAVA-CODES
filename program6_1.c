///////////////////////////////////////////////////////////////////////////////////////////
//Writing a program which accept name from user and print thaat name 
//////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

int main()
{
 char Name[30];

printf("Enter your full name\n");
scanf("%[^'\n']s",Name);

printf("yout full name is %s",Name);
 return 0;
}