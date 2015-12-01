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

struct node * removeEveryKthNode(struct node *head, int K) {
	if (K <= 0 || head == NULL)
		return NULL;
	if (K == 1){
		return NULL;
	}
	struct node *ptr = head;
	struct node *cur = head->next;
	int count = 0;
	while (ptr != NULL && cur != NULL)
	{
		count++;
		if (count % K == K - 1){
			ptr->next = cur->next;
			count = 0;
		}
		ptr = ptr->next;
		if (ptr != NULL)
			cur = ptr->next;
	}
	return head;
}