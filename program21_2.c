////////////////////////////////////////////////////////////////////////////////////
//Accept no of rows and no of columns form user and display below pattern
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iRow,int iCol)
{
 int i = 0,j = 0,k1=1,k2=1;


for(i =1; i<=iRow; i++)
{
k2=1;
 for(j =1; j<=iCol+1; j++)
{
if((i%2)!=0)
{
 k1 = j*2;
 printf("%d\t",k1);
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