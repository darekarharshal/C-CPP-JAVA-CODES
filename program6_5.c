///////////////////////////////////////////////////////////////////////////////////////////
//Writing a program which accept total marks and obtained marks from user and calculate the percntage
//////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>
float Percentage(int iNo1,int iNo2)
{
 float fAns = 0.0f;

 fAns = iNo2/iNo1;

return fAns;

}


int main()
{
 int iValue1 = 0,iValue2 = 0;
float fRet = 0.0f;

printf("please enter the total marks\n");
scanf("%d",&iValue1);

printf("please enter the marks that you get\n");
scanf("%d",&iValue2);

fRet = Percentage(iValue1,iValue2);

printf("The percntage is %f",fRet);



 return 0;
}