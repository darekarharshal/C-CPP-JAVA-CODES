///////////////////////////////////////////////////////////////////////////////////////////
//Writing a program to display radius of circle from user and calculate the area
//////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

double RectArea(float fNo1, float fNo2)
{
double dRet1 = 0.0f;
double dNo1 = 0.00;
 

dNo1 = fNo1*fNo2;
 
return dNo1;
}




int main()
{
 double dValue1 = 0.0f, dValue2 = 0.00;
 double dRet = 0.0f;

printf("enter heigth  \n");
scanf("%lf",&dValue1);

printf("enter width  \n");
scanf("%lf",&dValue2);

 dRet = RectArea(dValue1,dValue2);

printf("the area is %lf\n",dRet);


 return 0;
}