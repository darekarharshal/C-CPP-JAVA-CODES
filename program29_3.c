#include<stdio.h>
#include<stdlib.h>


struct node
{
  int data;
  struct node *next;
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

void InsertFirst(PPNODE First, int no)
{
  PNODE newn = NULL;
  newn = (PNODE)malloc(sizeof(NODE));

 newn->data=no;
 newn->next=NULL;

  if(*First==NULL)
  {
    *First=newn;
  }
  else
  {
    newn->next=*First;
    *First=newn;
  }
}





int AdditionEven(PNODE First)
{
  int iCnt1 = 0,iCnt = 0;
  while (First !=NULL)
  {
    
   
    if((First->data)%2==0)
    {
     iCnt1 = iCnt1+First->data;
    }
   
    
    
     First=First->next;
   
  
  }
  return iCnt1;
}





int main()
{
 PNODE Head = NULL;
 int iRet = 0;

 
 InsertFirst(&Head,41);
 InsertFirst(&Head,32);
 InsertFirst(&Head,20);
 InsertFirst(&Head,11);

 iRet =  AdditionEven(Head);

printf("sum of all even no is %d\n",iRet);

return 0;

}








