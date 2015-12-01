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

struct node * sortLinkedList(struct node *head) {
	if (head == NULL)
		return NULL;
	struct node *cur;
	struct node *ptr;
	int temp;
	for (cur = head; cur->next != NULL; cur = cur->next){
		for (ptr = cur->next; ptr != NULL; ptr = ptr->next){
			if (cur->num > ptr->num){
				temp = cur->num;
				cur->num = ptr->num;
				ptr->num = temp;
			}
		}
	}
	return head;
}