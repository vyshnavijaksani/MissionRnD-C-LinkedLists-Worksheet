/*
OVERVIEW: Given an unsorted single linked list, sort the linked list without using extra array or linked list.
E.g.: 4->2->1->5->3, output is 1->2->3->4->5.

INPUTS: An unsorted single linked list.

OUTPUT: Sort the linked list.

ERROR CASES: Return NULL for error cases.

NOTES: Without using extra array or linked list.
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
};
void swap(struct node *a, struct node *b)
{
	int temp = a->num;
	a->num = b->num;
	b->num = temp;
}

struct node * sortLinkedList(struct node *head)
{
	if (head == NULL)
		return NULL;
	if (head->next == NULL)
		return head;
	struct node *temp;
	struct node *temp1 = NULL;
	int count = 0;
	do
	{
		temp = head;
		count = 0;
		while (temp->next != temp1)
		{
			//to check whether first node data is greater than second node data
			if (temp->num > temp->next->num)
			{
				swap(temp, temp->next); count++;
			}
			temp = temp->next;
		}temp1 = temp;
	} while (count);

	return head;
}