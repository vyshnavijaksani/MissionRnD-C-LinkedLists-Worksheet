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

void sll_012_sort(struct node *head)
{
	struct node *temp = head;
	int counter[3] = { 0, 0, 0 };
	//to count number of 0s and store in counter[0],1s in counter[1],2s in counter[2]
	while (temp != NULL)
	{
		counter[temp->data]=counter[temp->data]+ 1;
		temp = temp->next;
	}
	int i = 0;
	temp = head;
	while (temp != NULL)
	{
		//to check whether counter is 0
		if (counter[i] == 0)
			i = i + 1;
		//to modify content of linked list accordingly
		else
		{
			temp->data = i;
			counter[i]--;
			temp = temp->next;
		}
	}
	
	return;
}