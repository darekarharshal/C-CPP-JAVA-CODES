///////////////////////////////////////////////////////////////////////////////////////////
//Writing a program to display 
//////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

int KMtoMeter(int iNo)
{
int iAns = 0;

iAns = 1000*iNo;

return iAns;

}



int main()
{
 int iValue = 0;
int iRet = 0;

 printf("Enter the distance\n");
 scanf("%d",&iValue);


iRet = KMtoMeter(iValue);

printf(" distance is %d\n",iRet);


 return 0;
}