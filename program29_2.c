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





void DisplayPrime(PNODE First)
{
  int iCnt1 = 0,iCnt = 0;
  while (First !=NULL)
  {
    int iCnt1 = 0,iCnt = 0;
    for(iCnt = 1; iCnt <= First->data; iCnt++)
    {
    if(((First->data%iCnt)!=0)&&(First->data)%2!=0)
    {
     iCnt1 = First->data;
    }
   
    }
    if(iCnt1!=0)
    {
    printf("%d\t",iCnt1);
    }
     First=First->next;
   
  
}
}





int main()
{
 PNODE Head = NULL;

 InsertFirst(&Head,89);
 InsertFirst(&Head,22);
 InsertFirst(&Head,41);
 InsertFirst(&Head,17);
 InsertFirst(&Head,20);
 InsertFirst(&Head,11);

 DisplayPrime(Head);

return 0;

}








