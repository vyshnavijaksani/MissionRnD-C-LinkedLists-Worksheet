/*
OVERVIEW: Given a single linked list, remove every Kth node in the linked list.
E.g.: 1->2->3->4->5 and K 2, output is 1->3->5.

INPUTS: A linked list and Value of K.

OUTPUT: Remove every Kth node in the linked list.

ERROR CASES: Return NULL for error cases.

NOTES:
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
};
/*int ceil(int num)
{
	num = num + 0.5;
	return num;
}*/
struct node * removeEveryKthNode(struct node *head, int K) {
	//struct node *temp = head;
	//int i = 1;
	if (head == NULL)
		return NULL;
	if (K < 0)
		return NULL;
	if (K == 0||K==1)
		return NULL;
	int count = 0;
	/*while (temp->next != NULL)
	{
		count++;
		temp = temp->next;
	}*/
	/*if (K > count)
		return head;
	if (K == count)
	{

	}
	temp = head;
	i = 1;
	while (temp->next!=NULL)
	{
		while (i < ceil(K/2))
		{
			temp = temp->next;
			i++;
		}
		temp = temp->next->next;
		K = K * 2;
	
	}
	return head;*/
	if (head == NULL)
		return NULL;

	//int i = 1;
	//head = temp;
	struct node *temp = head;
//	struct node *temp1 = head->next;
	/*int index = 1;
	while (temp1!=NULL)
	{

		if (index%K == 0)
		{
			temp->next = temp1->next;
			temp1 = temp1->next;
		}
		else
		{
			temp = temp1;
			temp1 = temp1->next;
		}
		++index;
	}*/




	return head;
}