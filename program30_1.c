#include<stdio.h>
#include<stdlib.h>


struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE First,int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
   

    newn->data=no;
    newn->next=NULL;

    if(*First == NULL)
    {
        *First = newn;
    }
    else
    {
        newn->next = *First;
        *First = newn;
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
    printf("NULL \n");
}


    void Reverse(PNODE First)
    {
        int iCnt = 0,iCnt1 = 0;
        int iCnt2 = 0;
        while (First!=NULL)
        {
            iCnt = First->data;
            printf("|");
            while (iCnt!=0)
            {
            
             iCnt2 = iCnt%10;
             printf("%d",iCnt2);
             iCnt = iCnt/10;

            
            
            }
            printf("|->");
            printf("\t");


            First=First->next;
        }
        
    }
    









int main()
{
   PNODE Head = NULL;

   InsertFirst(&Head,89);
   InsertFirst(&Head,6);
   InsertFirst(&Head,41);
   InsertFirst(&Head,17);
   InsertFirst(&Head,28);
   InsertFirst(&Head,11);

   Display(Head);

  printf("reverse order is\n");

   Reverse(Head);

    return 0;
}