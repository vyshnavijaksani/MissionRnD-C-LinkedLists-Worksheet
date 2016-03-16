/*
OVERVIEW: Given a single linked list, remove every Kth node in the linked list.
E.g.: 1->2->3->4->5 and K 2, output is 1->3->5.

INPUTS: A linked list and Value of K.

OUTPUT: Remove every Kth node in the linked list.

ERROR CASES: Return NULL for error cases.

NOTES:
*/

#include <stdio.h>
#include<malloc.h>
struct node {
	int num;
	struct node *next;
};
struct node * removeEveryKthNode(struct node *head, int K) {
	
	if (head == NULL||K<=0||head==NULL)
		return NULL;
	struct node *temp = head;
	int count = 0;
	while (temp!= NULL)
	{
		temp = temp->next;
		count++;
	}
	//K greater than head case
	if (K > count)
	{
		return head;
	}
	int index = 0;
	int num1 = 1, res = 0;
	res = K - 1;
	int i;
	//num2 is number of times a loop is to be run
	int num2 = count / K;
	temp = head;
	if (K == 1)
	{
		free(head);
		return NULL;
	}
	for (i = 0; i < num2; i++)
	{
		struct node *temp = head;
		
		int j;
		for (j = 0; j < K - 2; j++)
		{
			temp = temp->next;
		}
		struct node *temp2 = temp->next;
		temp->next = temp2->next;
		free(temp2);
		//updating value of k
		K = K + res;
	}
return head;
}