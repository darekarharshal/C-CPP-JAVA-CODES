/////////////////////////////////////////////////////////////////////////////////////////////
//Accept one number from user if number is less than 10 then print "Hello" otherwise print"Demo"
/////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
 if(iNo < 10)
{
 printf("HELLO\n");
}
else
{
 printf("DEMO\n");
}


}



int main()
{
 int iValue = 0;

 printf("Enter number \n");
 scanf("%d",&iValue);

 Display(iValue); 



 return 0;
}