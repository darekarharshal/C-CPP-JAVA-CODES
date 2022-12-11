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
    printf("\n");
}

void SumDigit(PNODE First)
{
  
  int iCnt1 =0;
  int iCnt = 0;
  int iCnt2 = 0;
  while(First != NULL)
  {
     iCnt = First->data;
     iCnt2 =0;
     iCnt1=0;
    while (iCnt!=0)
    {
   iCnt2 =iCnt%10;
   iCnt1 = iCnt1 + iCnt2;
   iCnt = iCnt/10;
    }
    printf("%d\t",iCnt1);
    First = First->next;
     
  }
 
}





int main()
{
 PNODE Head = NULL;
 int iRet = 0;

 InsertFirst(&Head,640);
 InsertFirst(&Head,240);
 InsertFirst(&Head,320);
 InsertFirst(&Head,230);
 InsertFirst(&Head,110);

  Display(Head);






SumDigit(Head);

return 0;

}








