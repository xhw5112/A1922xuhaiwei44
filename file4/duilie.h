#ifndef duilie_h
#define duilie_h

#include <stdio.h>
#include <stdlib.h>

typedef int DataType;
typedef struct node_{
	DataType data;
	struct node_ *next;


}Node;

typedef struct list_{
	Node *head;
	Node *tail;
	Node *current;


}List;

typedef int dataType;
typedef struct node{
	dataType data;
	struct node *left,*right;
}Deque;

void initList(List *);
int Empty(List *);
void push(List *,DataType x);
void pop(List *);
Node *frontQueue(List *);
Node *backQueue(List *);
int size(List *);

Deque* createDeque();
void initqueue(Deque *q);
int Size(Deque *);
int empty(Deque *);
dataType back(Deque *);
dataType front(Deque *);
void push_front(Deque *,dataType x);
void push_back(Deque *,dataType x);
void print(Deque *);
void pop_back(Deque *);





#endif
