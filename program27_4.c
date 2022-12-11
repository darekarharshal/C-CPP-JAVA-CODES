////////////////////////////////////////////////////////////////////////////////////
//Display charcter to respective format
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>


int ChkChar(char *str,char ch)
{
 
  int iCount = -1, iCount1 =0, iCount3=-1;
  

  while(*str !='\0')
  {
    
    if((*str==ch))
    {
     iCount3=iCount1;
     
    }
    str++;
     iCount++;
    iCount1++;

  }
 
  


return iCount3;
 
}





int main()
{
 char Arr[20];
 char cValue = '\0';
 
 int iRet = 0;
 

printf("Enter string\n");
scanf("%[^'\n']s",Arr);

printf("please enter the charcater\n");
scanf(" %c",&cValue);




iRet = ChkChar(Arr, cValue);

printf("no of times the character is %c present at index %d",cValue,iRet);


  return 0;
}