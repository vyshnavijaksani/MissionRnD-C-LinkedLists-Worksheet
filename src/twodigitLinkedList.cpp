/*
OVERVIEW:  Given a single linked list (two digits as a node).Convert that to number


INPUTS:  SLL head pointer

OUTPUT: Create a number from the linked list given ,In each node there are two numbers ,digit1 and digit1 ,
So if the nodes are 12->34->56->78 , Final number would be 12345678 ( Integer)

ERROR CASES:

NOTES: Only Postive Numbers
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int digit1;
	int digit2;
	struct node *next;
};

int convert_sll_2digit_to_int(struct node *head){
	
	struct node *temp = head;
	int i = -1;
	int *ptr = '\0';
	temp = head;
	while (temp->next!=NULL)
	{
		ptr = (int *)malloc(sizeof(int));
	
		*(ptr + i) = temp->digit1;
		i++;
		ptr = (int *)malloc(sizeof(int));
		*(ptr + i) = temp->digit2;
		i++;
		temp = temp->next;
	}

	return *ptr;
}
