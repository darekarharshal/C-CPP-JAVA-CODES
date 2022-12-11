///////////////////////////////////////////////////////////////////////////////////////////
//Writing a program to display temp
//////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

double FhtoCs(float fTemp)
{
double dAns = 0.0;

dAns = (fTemp - 32)*(5/9);

return dAns;

}



int main()
{
 float fValue = 0.0f;
 double dRet = 0.0;
 printf("Enter the temp\n");
 scanf("%f",&fValue);


dRet = FhtoCs(fValue);

printf(" temp is %lf\n",dRet);


 return 0;
}