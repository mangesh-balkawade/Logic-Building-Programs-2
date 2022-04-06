#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct node
{
	int data;
	struct node * next;
}NODE,* PNODE,**PPNODE;

///////////////////////////////////////////////InsertLast////////////////////////////////////////////////////////////////////////

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


///////////////////////////////////////////////DisplayPerfect////////////////////////////////////////////////////////////////////////

void DisplayPerfect(PNODE head)
{
	int i=0,isum=0,temp=0;
	while(head!=NULL)
	{
		temp=head->data;
		for(i=1;i<=(temp/2);i++)
        {
        	if((temp%i)==0)
        	{
        		isum=isum+i;
        	}
        }
        if(isum==head->data)
        {
        	printf("[%d]->",head->data );
        }
		head=head->next;
		isum=0;
		temp=0;
	}
	printf("NULL");
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////DisplayPrime////////////////////////////////////////////////////////////////////////

void DisplayPrime(PNODE head)
{
	int i=0,temp=0,icnt=0;
	while(head!=NULL)
	{
		temp=head->data;
		for(i=2;i<=(temp/2);i++)
        {
        	if((temp%i)==0)
        	{
        		icnt++;
        		break;
        	}		
        }
        if(icnt==0)
        {
        	printf("[%d]->",head->data );
        }
		head=head->next;
		icnt=0;
	}
	printf("NULL");
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////SumOfEven////////////////////////////////////////////////////////////////////////
int SumOfEven(PNODE head)
{
	int i=0,isum=0,temp=0;
	while(head!=NULL)
	{
	 temp=head->data;
	 if(temp%2==0)
	 {
	 	isum=isum+temp;
	 }
	 head=head->next;
    }
    return isum;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////SecondMax////////////////////////////////////////////////////////////////////////

int SecondMax(PNODE head)
{
	int temp=0,imax=head->data,imax2=0,icnt=0;
	while(head!=NULL)
	{
	  temp=head->data;
      if(imax<temp)
      {
      	imax2=imax;
      	imax=temp;
        icnt++;
      }
      	if((temp<imax)&&(imax2<temp))
      	{
      		imax2=temp;
      	}
      head=head->next;
	}
return imax2;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////DisplayDigSum////////////////////////////////////////////////////////////////////////

void DisplaySumDig(PNODE head)
{
	int idigsum=0,temp=0,idigit=0;
	while(head!=NULL)
	{
	 temp=head->data;
	 while(temp!=0)
	 {
       idigit=temp%10;
       idigsum=idigsum+idigit;
       temp=temp/10;
	 }
	 printf("%d \t",idigsum);
	 idigsum=0;
	 temp=0;
	 head=head->next;
    }
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
	PNODE first=NULL;
	int i=0,ino=0,isize=0,iret1=0,iret2=0,iret3=0,iret4=0,iret5=0;
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

    DisplayPerfect(first);
    printf("\n");

    DisplayPrime(first);
    printf("\n");

    iret1=SumOfEven(first);
    printf("Sum of ecven elements in linked list is \n %d",iret1);
    printf("\n");

    iret2=SecondMax(first);
    printf("second max is \n %d",iret2);
    printf("\n");

    DisplaySumDig(first);
	return 0;
}