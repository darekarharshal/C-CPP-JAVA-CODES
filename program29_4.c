#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)
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

void Display(PNODE First)
{
    printf("Elements from the Linked List are : \n");

    while(First != NULL)
    {
        printf("| %d |-> ",First->data);
        First = First -> next;
    }
}




/*int SecMaximum(PPNODE First)
{
  PNODE iCnt1 = *First;
  int iNo = First->data;
  int iCnt = 0;
  
 
  while (First !=NULL)
  {
    
   
    if((First->data)>1)
    {
     
    iCnt1=First->next;
 
    }
   
  First=First->next;
  }
 
iCnt = iCnt1->data;
  return iCnt;
}

*/



int main()
{
 PNODE Head = NULL;
 int iRet = 0;

 
 InsertFirst(&Head,240);
 InsertFirst(&Head,320);
 InsertFirst(&Head,230);
 InsertFirst(&Head,110);

  Display(Head);




return 0;

}








