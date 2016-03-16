/*
OVERVIEW:  Given a number convert that to single linked list (each digit as a node).
E.g.: Input: 234, Output: 2->3->4.

INPUTS:  A number.

OUTPUT: Create linked list from given number, each digit as a node.

ERROR CASES: 

NOTES: For negative numbers ignore negative sign.
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int num;
	struct node *next;
};

struct node* insert(struct node* head,int x)
{
	node *temp = (node*)malloc(sizeof(struct node));
	temp->num = x;
	temp->next = NULL;
	if (head != NULL)
		temp->next = head;
	head = temp;
	return head;
}
struct node *numberToLinkedList(int num)
{
	int i =0, arr[4], len = 0;
	struct node* head = NULL;
	if (num == 0)
	{
		head = insert(head, num);
			return head;
	}
	if (num < 0)
		num = (-1)*num;
	while (num)
	{
		arr[i++] = num % 10;
		num = num / 10;
	}

	len = i ;
	 i = 0;
	for (i = 0; i < len; i++)
	{
		head = insert(head, arr[i]);
	}

	return head;
}