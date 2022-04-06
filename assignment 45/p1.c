#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct node
{
	int data;
	struct node * next;
}NODE,* PNODE,**PPNODE;

///////////////////////////////////////////////*InsertLast*////////////////////////////////////////////////////////////////////////

void InsertLast(PPNODE head,int data)
{
	PNODE temp=*head;
	PNODE newn = (PNODE) malloc (sizeof(NODE));
	newn->data=data;
	newn->next=NULL;

	if(*head==NULL)
	{
		*head=newn;
	}
	else
	{
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=newn;
	}
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////Display////////////////////////////////////////////////////////////////////////

void Display(PNODE head)
{
	while(head!=NULL)
	{
		printf("[%d]->",head->data );
		head=head->next;
	}
	printf("NULL");
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////ReverseElement///////////////////////////////////////////////////////////////////

void ReverseElement(PNODE head)
{
	int temp=0,idigit=0,irev=0;
	while(head!=NULL)
	{
		temp=head->data;
		while(temp!=0)
		{
          idigit=temp%10;
          irev=irev*10+idigit;
          temp=temp/10;
		}
		printf("%d\t",irev);
		head=head->next;
		irev=0;
		idigit=0;
		temp=0;
	}
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////DisplayPalindrome////////////////////////////////////////////////////////////////////////

void DisplayPalindrome(PNODE head)
{
	int idigit=0,temp=0,irev=0,temp2=0;
	while(head!=NULL)
	{
		temp=head->data;
		temp2=head->data;
		while(temp!=0)
		{
          idigit=temp%10;
          irev=irev*10+idigit;
          temp=temp/10;
		}
		if(irev==temp2)
		{
		printf("%d\t",irev);
	    }
		head=head->next;
		irev=0;
		idigit=0;
		temp=0;
		temp2=0;
	}
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////DisplayProduct//////////////////////////////////////////////////////////////////
void DisplayProduct(PNODE head)
{
	int idigit=0,ipro=1,temp=0;
	while(head!=NULL)
	{
	  temp=head->data;
	  while(temp!=0)
	  {
	  	idigit=temp%10;
	  	if(idigit!=0)
	  	{
           ipro=ipro*idigit;
	  	}
	  	temp=temp/10;
	  }
	  printf("%d\t",ipro);
      temp=0,ipro=1,idigit=0;
      head=head->next;
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////DisplaySmallDigit////////////////////////////////////////////////////////////////

void DisplaySmallDigit(PNODE head)
{
	int temp=0,idigit=0,ismall=9;
	while(head!=NULL)
	{
	  temp=head->data;
	  while(temp!=0)
	  {
	  	idigit=temp%10;
        if(ismall>idigit)
        {
        	ismall=idigit;
        }
	  	temp=temp/10;
	  }
	  printf("%d\t",ismall);
      temp=0,ismall=9,idigit=0;
      head=head->next;
	}
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////DisplayLargeDigit////////////////////////////////////////////////////////////////

void DisplayLargeDigit(PNODE head)
{int temp=0,idigit=0,imax=0;
	while(head!=NULL)
	{
	  temp=head->data;
	  while(temp!=0)
	  {
	  	idigit=temp%10;
        if(imax<idigit)
        {
        	imax=idigit;
        }
	  	temp=temp/10;
	  }
	  printf("%d\t",imax);
      temp=0,imax=0,idigit=0;
      head=head->next;
	}
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
	PNODE first=NULL;
	int i=0,ino=0,isize=0;
	printf("how many no you have to inserted\n");
	scanf("%d",&isize);
	for(i=1;i<=isize;i++)
	{
		printf("enter no\n");
		scanf("%d",&ino);
        InsertLast(&first,ino);
    }
    Display(first);
    printf("\n");

    ReverseElement(first);
    printf("\n");

    DisplayPalindrome(first);
    printf("\n");

    DisplayProduct(first);
    printf("\n");

    DisplaySmallDigit(first);
    printf("\n");

    DisplayLargeDigit(first);
	return 0;
}