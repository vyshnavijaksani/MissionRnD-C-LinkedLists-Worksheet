/*
OVERVIEW:  Given a single linked list of 0s 1s and 2s ,Sort the SLL such that zeroes 
will be followed by ones and then twos.


INPUTS:  SLL head pointer

OUTPUT: Sorted SLL ,Head should Finally point to an sll of sorted 0,1,2


ERROR CASES:

NOTES: Only 0,1,2, will be in sll nodes
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int data;
	struct node *next;
};
/*void swap1(struct node *a, struct node *b)
{
	int temp = a->data;
	a->data= b->data;
	b->data = temp;
}*/
void sll_012_sort(struct node *head)
{

	struct node *temp = head;
	//struct node *temp1 = NULL;
	int count;
	/*do
	{
		count = 0;
		while (temp->next != temp1)
		{
			if (temp->data > temp->next->data)
			{
				swap1(temp, temp->next);
				count++;
			}
			if (temp->data == temp->next->data)
			{
				count++;
			}
			temp = temp->next;
			
		}temp1 = temp;
	} while (count);*/
	int count1=0, count2=0, count3=0;
	while (temp != NULL)
	{
		if (temp->data == 0)
			count1++;
		temp = temp->next;
	}
	while (temp != NULL)
	{
		if (temp->data == 1)
			count2++;
		temp = temp->next;
	}
	while (temp!= NULL)
	{
		if (temp->data == 2)
			count3++;
		temp = temp->next;
	}
	temp = head;
	//struct node *ll = (struct node *)malloc(sizeof(struct node));
	//head = ll;
	count = 0;

	while (temp->next!=NULL)
	{
		while (count1)
		{
			temp->data = 0;
			temp = temp->next;
			count1--;
		}
		while (count2)
		{
			temp->data = 1;
			temp = temp->next;
			count2--;
		}
		while (count3)
		{
			temp->data = 2;
			temp = temp->next;
			count3--;
		}
	}
	return;
}