////////////////////////////////////////////////////////////////////////////////////
//Accept no of rows and no of columns form user and display below pattern
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iRow,int iCol)
{
 int i = 0,j = 0,k2=1;
char k1 ='a';


for(i =1; i<=iRow; i++)
{
k2=1;
 for(j =1; j<=iCol; j++)
{
if((i%2)!=0)
{
 printf("%c\t",k1);
k1++;

}
 else
{

printf("%d\t",k2);

}
if(k2>=10)
{
k2=1;
}
k2 =k2+2;

}
k1='a';
printf("\n");

}

}


int main()
{
 int iValue1 = 0, iValue2 = 0;

printf("Enter number of rows and columns\n");
scanf("%d %d",&iValue1,&iValue2);

Pattern(iValue1,iValue2);






 return 0;
}