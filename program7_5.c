///////////////////////////////////////////////////////////////////////////////////////////
//Writing a program to display pattern
//////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

void Pattern(int iNo)
{
 int iNo1 = 1;
 if(iNo<0)
{
 iNo = -iNo;
}

for(int i =1; i <=5; i++)
{
iNo1 = iNo*i;
printf("%d\t",iNo1);

}
}




int main()
{
 int iValue = 0;

printf("enter no that want to display\n");
scanf("%d",&iValue);

Pattern(iValue);

 return 0;
}