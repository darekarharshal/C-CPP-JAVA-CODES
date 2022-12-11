////////////////////////////////////////////////////////////////////////////////////
//Accept no of rows and no of columns form user and display below pattern
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iRow,int iCol)
{
 int i = 0,j = 0;
char ch1 = 'A';
char ch2 = 'a';

 for(i = 1; i<=iRow; i++)
{
 for(j =1; j<=iCol; j++)
{
if((i%2)!=0)  
{
printf("%c\t",ch1);
 ch1++;
}
else
{
 printf("%c\t",ch2);
ch2++;
}
 
}
ch1 = 'A';
ch2 = 'a';
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