#ifndef lStack_h
#define lStack_h

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef int DataType;

typedef struct _node{
	DataType data;
	struct _node *next;
}Node;

typedef struct _stack{
     Node *head;
     Node *tail; 
} Stack;

void initStack(Stack *);
void push(Stack *, DataType);
void pop(Stack *);
DataType getLength(Stack *);
void disp(Stack *);
void conversion(Stack *);
int priority(char);
double compute(double x,double y,char op);
void operation();	


#endif
