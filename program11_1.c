///////////////////////////////////////////////////////////////////////////////////////////
//Writing a program to display range no form that get by the user 
//////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

void RangeDisplay(int iStart,int iEnd)
{
 for(int i = iStart; i<=iEnd; i++)
{
 printf("%d\t",i);
}


}


int main()
{
 int iValue1 =0, iValue2 = 0;

printf("Enter the first value form that your range is stariting\n");
scanf("%d",&iValue1);

printf("Enter the second value form that your range is stariting\n");
scanf("%d",&iValue2);

RangeDisplay(iValue1,iValue2);




 return 0;
}