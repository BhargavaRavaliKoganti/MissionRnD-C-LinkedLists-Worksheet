/*
OVERVIEW:  Given a number convert that to single linked list (each digit as a node).
E.g.: Input: 234, Output: 2->3->4.

INPUTS:  A number.

OUTPUT: Create linked list from given number, each digit as a node.

ERROR CASES: 

NOTES: For negative numbers ignore negative sign.
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int num;
	struct node *next;
};

struct node * numberToLinkedList(int N) {
	struct node *head = NULL;
	struct node *cur;
	cur = (struct node*)malloc(sizeof(struct node));
	if (N == 0){
		cur->num = N;
		cur->next = head;
		head = cur;
		return head;
	}
	else if (N < 0)
		N = N * -1;
	while (N > 0){
		cur->num = N % 10;
		cur->next = head;
		head = cur;
		cur = (struct node*)malloc(sizeof(struct node));
		N = N / 10;
	}
	return head;
}