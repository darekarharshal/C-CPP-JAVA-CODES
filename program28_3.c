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

void InsertFirst(PPNODE Head, int no)
{
  PNODE newn = NULL;
  newn = (PNODE)malloc(sizeof(NODE));
  newn->next=NULL;
  newn->data=no;

  if(*Head==NULL)
  {
    *Head=newn;
  }
  else
  {
    newn->next=*Head;
    *Head = newn;
  }
}

void Display(PNODE Head)
{
  printf("Elements from the linked list are : \n");

  while(Head != NULL)
    {
        printf("| %d |-> ",Head->data);
        Head = Head -> next;
    }
    printf("NULL \n");
  
}



int SearchFirstOcc(PNODE Head, int no1)
{
  int iNo = 0;
  int iCnt = 0;


   while (Head !=NULL)
   {
    if(Head->data==no1)
    {
      iNo=iCnt+1;
      break;
     
    }
    Head= Head->next;
    iCnt++;
   }

   return iNo;
     
}

int SearchLastOcc(PNODE Head, int no1)
{
  int iNo = 0;
  int iCnt = 0;


   while (Head !=NULL)
   {
    if(Head->data==no1)
    {
      iNo=iCnt+1;
     
    }
    Head= Head->next;
    iCnt++;
   }

   return iNo;
     
}

int Addition(PNODE Head)
{
  int iAns  = 0;

  while (Head != NULL)
  {
    iAns = iAns+Head->data;
   Head= Head->next;
  }
  return iAns;
}







int main()
{
 PNODE First = NULL;
 int no = 0;
 int iRet = 0;

 
 InsertFirst(&First,40);
 InsertFirst(&First,30);
 InsertFirst(&First,20);
 InsertFirst(&First,10);
Display(First);



iRet = Addition(First);

printf("the the additon id %d\n",iRet);
  return 0;
}