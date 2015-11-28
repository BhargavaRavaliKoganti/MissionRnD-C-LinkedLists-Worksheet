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

void sll_012_sort(struct node *head){
	struct node *cur;
	struct node *ptr;
	int temp;
	for (cur = head; cur->next != NULL; cur = cur->next){
		for (ptr = cur->next; ptr != NULL; ptr = ptr->next){
			if (cur->data > ptr->data){
				temp = cur->data;
				cur->data = ptr->data;
				ptr->data = temp;
			}
		}
	}
	head = cur;
}