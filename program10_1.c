///////////////////////////////////////////////////////////////////////////////////////////
//Writing a program to display radius of circle from user and calculate the area
//////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

int CircleArea(double dNo)
{
double dRet1 = 0.0f;
double dNo1 = 0.0f;
 
if(dNo<=0)
{
 dNo = -dNo;
}

dNo1 = 3.14*dNo*dNo;
 
return dNo1;
}




int main()
{
 double dValue = 0.0f;
 double dRet = 0.0f;

printf("enter no that want to display \n");
scanf("%lf",&dValue);

 dRet = CircleArea(dValue);

printf("the area is %lf\n",dRet);


 return 0;
}