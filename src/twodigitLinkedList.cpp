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
// to calculate power
int power(int num1, int num2)
{
	int i = 0, res = 1;
	num1 = 10;
	if (num2 == 0)
		return 1;
	else if (num2 == 1)
		return num1;
	else
		return (num1*power(num1, num2 - 1));
}
int convert_sll_2digit_to_int(struct node *head){
	
	struct node *temp = head;
	int count = 0;
	while (temp != NULL)
	{
		temp = temp->next;
		count++;
	}
	if (head->digit1 == 0 && head->digit2 == 0 && head->next == NULL)
	{
		int number = 0;
		return number;
	}
	int count1 = count * 2;
	int dummycount = count1 - 1;
	int result = 0;
	temp = head;
	//traversing linked list and updating result variable accordingly
	do
	{
		result=result+(temp->digit1*(power(10,dummycount)));
		dummycount--;
		result=result+(temp->digit2*(power(10,dummycount)));
		dummycount--;
		head = temp->next;
		free(temp);
		temp = head;
	} while (temp!= NULL);
	
return result;
}
