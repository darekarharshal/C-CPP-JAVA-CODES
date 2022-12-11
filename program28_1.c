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
     
    }
    Head= Head->next;
    iCnt++;
   }

   return iNo;
     
}






int main()
{
 PNODE First = NULL;
 int no = 0;
 int iRet = 0;

 InsertFirst(&First,10);
 InsertFirst(&First,20);
 InsertFirst(&First,30);
 InsertFirst(&First,40);
 InsertFirst(&First,50);
Display(First);

printf("Please enter the first element occurance that you want to find\n");
scanf("%d",&no);

iRet = SearchFirstOcc(First,no);

printf("the first %d no occured at %d\n",no,iRet);
  return 0;
}