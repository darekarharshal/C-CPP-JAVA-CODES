////////////////////////////////////////////////////////////////////////////////////
//Accept no of rows and no of columns form user and display below pattern
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iRow,int iCol)
{
 int i = 0,j = 0,k2=1;
int k1 =1;


for(i =1; i<=iRow; i++)
{
 k1=k2;
 for(j =1; j<=iCol; j++)
{ 



 printf("%d\t",k1);
 k1++;


 
}
printf("\n");
k2++;

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