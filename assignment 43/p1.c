#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int data;
	struct node * next;
}NODE,* PNODE,** PPNODE;

 ////////////////InsertFirst//////////////////////////////////////////////////////////
void InsertFirst(PPNODE head,int data)
{
	PNODE newn = NULL;
	newn = (PNODE)malloc(sizeof(NODE));
	newn->data=data;
	newn->next=NULL;
	
	if((*head)== NULL)
	{
		*head=newn;
		newn->next=NULL;
	}
	else
	{
		newn->next=*head;
		*head=newn;
	}
}
//////////////////////////////////////////////////////////////////////////////////////


 ////////////////Display/////////////////////////////////////////////////////////////
void Display(PNODE head)
{
	while(head!=NULL)
	{
		printf("[%d]->",head->data);
		head=head->next;
	}
	printf("NULL");
}
//////////////////////////////////////////////////////////////////////////////////////


 ////////////////FIRST OCCURENCE//////////////////////////////////////////////////////////
int FirstOcc(PNODE head,int ino)
{
	int icnt=1,iret=-1;
	
	while(head!=NULL)
	{
		if((head->data) == ino)
		{
			iret=icnt;
			break;
		}
		head=head->next;
		icnt++;
	}
	return iret;
}
//////////////////////////////////////////////////////////////////////////////////////


 ////////////////Last OCCURENCE//////////////////////////////////////////////////////////
int LastOcc(PNODE head,int ino)
{
	int icnt=1,iret=-1;
	
	while(head!=NULL)
	{
		if((head->data) == ino)
		{
			iret=icnt;
		}
		head=head->next;
		icnt++;
	}
	return iret;
}
//////////////////////////////////////////////////////////////////////////////////////


 ////////////////Addition///////////////////////////////////////////////////////////////
int Addition(PNODE head)
{
	int isum=0;
	
	while(head!=NULL)
	{
		isum=isum+(head->data);
		head=head->next;
	}
	return isum;
}

 ////////////////Maximum//////////////////////////////////////////////////////////////
int Maximum(PNODE head)
{
	int imax=head->data;
	
	while(head!=NULL)
	{
		if(imax<(head->data))
		{
			imax=head->data;
		}
		head=head->next;
	}
	return imax;
}
//////////////////////////////////////////////////////////////////////////////////////


 ////////////////Minimum//////////////////////////////////////////////////////////////
int Minimum(PNODE head)
{
	int imin=head->data;
	
	while(head!=NULL)
	{
		if(imin>(head->data))
		{
			imin=head->data;
		}
		head=head->next;
	}
	return imin;
}
//////////////////////////////////////////////////////////////////////////////////////




 int main()
 {
	 PNODE first=NULL;
	 int iret1=0,iret2=0,iret3=0,iret4=0,iret5=0;
	 int i=0,ino=0,isize=0,search1=0,search2=0;
	 printf("how many data you have to inserted\n");
	 scanf("%d",&isize);
	 for(i=1;i<=isize;i++)
	 {
		 printf("enter no to be added\n");
		 scanf("%d",&ino);
		 InsertFirst(&first,ino);
	 }
	 
	 Display(first);
	 printf("\n");
	 
	  ////////////////FIRST OCCURENCE////////////////////////////////////////////////////////
	  
	  printf("enter no hava to find");
	  scanf("%d",&search1);
	  iret1=FirstOcc(first,search1);
	  if(iret1==-1)
	  {
		  printf("no is not present in linked list");
	  }
	  else
	  {
	      printf("first position of element is \n %d",iret1);
	  }
	  printf("\n");
	  ////////////////////////////////////////////////////////////////////////////////////////
	  
	  ////////////////Last OCCURENCE//////////////////////////////////////////////////////////
	  printf("enter no hava to find");
	  scanf("%d",&search2);
	  iret2=LastOcc(first,search2);
	  if(iret2==-1)
	  {
		  printf("no is not present in linked list");
	  }
	  else
	  {
	      printf("last position of element is \n %d",iret2);
	  }
	   printf("\n");
	  //////////////////////////////////////////////////////////////////////////////////////////
	  
	  ////////////////Addition of elements//////////////////////////////////////////////////////
	  iret3=Addition(first);
      printf("addition of elements are \n %d",iret3);
	   printf("\n");
	  //////////////////////////////////////////////////////////////////////////////////////////
	  
	   ////////////////Maximum element//////////////////////////////////////////////////////////
	  iret4=Maximum(first);
      printf("maximum element is \n %d",iret4);
	   printf("\n");
	  //////////////////////////////////////////////////////////////////////////////////////////
	  
	   ////////////////Minimum element//////////////////////////////////////////////////////////
	  iret5=Minimum(first);
      printf("Minimum element is \n %d",iret5);
	   printf("\n");
	  //////////////////////////////////////////////////////////////////////////////////////////
	  
	 return 0;
 }
	 
