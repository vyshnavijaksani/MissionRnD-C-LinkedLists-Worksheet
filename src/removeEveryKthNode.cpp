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
/*struct node *head;
void removek(int K)
{

	struct node *temp = head;
	if (K == 1)
	{
		head = temp->next;
		return;
	}
	int i;
	for (i = 0; i < K - 2; i++)
	{
		temp = temp->next;
	}
	struct node *temp2 = temp -> next;
	temp->next = temp2->next;
}*/
struct node * removeEveryKthNode(struct node *head, int K) {
	
	if (head == NULL||K<=0||K==1||head==NULL)
		return NULL;
	struct node *temp = head;
	int count = 0;
	while (temp!= NULL)
	{
		temp = temp->next;
		count++;
	}
	if (K > count)
	{
		return head;
	}
	int index = 0;
	int num1 = 1, res = 0;// num2 = 2;
	res = K - 1;
	int i;
	int num2 = count / K;
	for (i = 0; i < num2; i++)
	{

		/*		while (index < count)
				{
				if (index == K)
				{
				removek(res);
				K = K + res;
				//	index = 0;
				}
				index++;
				}
				}*/

		struct node *temp = head;
		int j;
		for (j = 0; j < K - 2; j++)
		{
			temp = temp->next;
		}
		struct node *temp2 = temp->next;
		temp->next = temp2->next;
		K = K + res;
	}
return head;
}