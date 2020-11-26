#ifndef listg_h
#define listg_h

#include <stdio.h>
#include <stdlib.h>

typedef int DataType;

typedef struct node_{
	int no;
	DataType data;
	struct node_ *next;
} Node;

typedef struct list_{
	Node *head;
	Node *tail;
	Node *current;
}List;

void initList(List *);
void putList(List *, int i, DataType);
Node *getNode(List *, DataType);
void deleNode(List *, int i);
int getLength(List *);
void dispList(List *);
int empty(List *);
DataType getData(List * , int i );
void clearList(List *);
void yList(List *);

#endif
