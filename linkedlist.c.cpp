// triangle1.c.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
void display(struct node *);
void main()
{
	struct node *head,*temp;
	int num,rem;
	head=NULL;
	printf("enter a number");
	scanf("%d",&num);
	while(num!=0)
	{
		rem=num%10;
		temp=(struct node *)malloc(sizeof(struct node));
		temp->data=rem;
		temp->next=head;
		head=temp;
		num=num/10;
	}
	display(head);
	getch();
	return ;
}
void display(struct node *p)
{
	while(p!=NULL)
	{
		printf("%d->",p->data);
		p=p->next;
	}
	printf("NULL");
}
