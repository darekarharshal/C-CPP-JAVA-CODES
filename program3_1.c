/////////////////////////////////////////////////////////////////////////////////////////
//Accept one number from user and print that number of even numbers on screen
/////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void PrintEven(int iNo)
{
 if(iNo <= 0)
{
 return;
}
 int iCnt = 0;
 int iAns = 0;
 for(iCnt = 1; iCnt<=iNo; iCnt++)
{
iAns = iCnt * 2;
printf("%d\t",iAns);
}


}




int main()
{
 int iValue = 0;

 printf("Enter number\n");

 scanf("%d",&iValue);

 PrintEven(iValue);



 return 0;
}