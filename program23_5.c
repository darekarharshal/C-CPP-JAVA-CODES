////////////////////////////////////////////////////////////////////////////////////
//Accept character from user and check wheather it is small case or not
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

void DisplaySchedule(char chDiv)
{
 if(chDiv=='a'||chDiv=='A')
{
 printf("your exam at 7AM\n");
}

if(chDiv=='b'||chDiv=='B')
{
 printf("your exam at 8.30AM\n");
}
if(chDiv=='c'||chDiv=='C')
{
 printf("your exam at 9.20AM\n");

}
if(chDiv=='d'||chDiv=='D')
{
 printf("your exam at 10.30AM\n");
}
  
 
}



int main()
{
 char cValue = '\0';

printf("enter the division that you want to check\n");
scanf("%c",&cValue);

 DisplaySchedule(cValue);



 return 0;
}