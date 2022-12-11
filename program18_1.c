////////////////////////////////////////////////////////////////////////////////////
//Accept N no from user and display below pattern
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iNo)
{
 char cNo;

 for(cNo = 'A'; cNo <= 'iNo'; ++cNo)
{
 printf("%c\t",cNo);

}



}


int main()
{
 int iValue = 0;

printf("enter no of elements \n");
scanf("%d",&iValue);

Pattern(iValue);




 return 0;
}