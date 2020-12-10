#include "duilie.h"

void initList(List *list){
	list->head = NULL;
	list->tail = NULL;
	list->current = NULL;

	return;
}

int Empty(List *list){
	return list->head ==list->tail;
}

void push(List *list,DataType x){
	Node *node = (Node *)malloc(sizeof(Node));
	node->data = x;
	node->next = NULL;
	if(list->head == NULL){
		list->head = node;
	}else{
		list->tail->next =node;
	}
	list->tail = node;

	return;

}



void pop(List *list){
	list->head = list->head->next;

	return;
}

Node *frontQueue(List *list){
	Node *node = (Node *)malloc(sizeof(Node));
	node = list->head;

	return node;
}

Node *backQueue(List *list){
	Node *node = (Node *)malloc(sizeof(Node));
	node = list->tail;

	return node;
}

int size(List *list){
	Node *node = (Node *)malloc(sizeof(Node));
	node = list->head;
	int i = 0;
	while(node){
		node = node->next;
		i++;
	}
	return i;
}


Deque* createDeque(){                                                                                                          
	Deque *head;                                                                                                           
	head =(Deque*)malloc(sizeof(Deque));                                                                                   
	head->left=head->right=head;                                                                                            
	return head;                                                                                                   
}


void InitList(List *list){
	list->head = NULL;
	list->tail = NULL;
	list->current = NULL;

	return;
}

int Size(Deque *dq){                                                                                                           
	Deque *p = dq->right;                                                                                                  
	int k=0;                                                                                                         
	while (p!=dq){                                                                                                                
		k++;                                                   
		p=p->right;                                                 
	}                                                                                  
	return k;              
}               

int empty(Deque *dq){
	return dq->right==dq;
}                    

dataType front(Deque *dq){           
	if (empty(dq)) exit(1);          
	return dq->right->data;        
}                                                          
dataType back(Deque *dq){
	if (empty(dq)) exit (1);
	return dq->left->data;

}



void push_front(Deque *dq,dataType x){        
	Deque *s=(Deque*)malloc(sizeof(Deque));    
	s->data=x;	
	s->left=dq;
	s->right=dq->right;
	dq->right->left=s;
	dq->right =s;
}



void push_back(Deque *dq,dataType x){
	Deque *s =(Deque*)malloc(sizeof(Deque));
	s->data=x;
	s->left=dq->left;
	s->right=dq;

	dq->left->right=s;

	dq->left=s;

}


void pop_front(Deque *dq){
	if(empty(dq))exit(1);
	Deque *p=dq->right;
	p->right->left=dq;
	dq->right=p->right;
	free(p);         
}
void pop_back(Deque *dq){
	if (empty(dq)) exit(1);
	Deque *p=dq->left;
	p->left->right=dq;
	dq->left=p->left;	
	free(p);   
}


void print(Deque *dq){
	Deque *p=dq->right;
	while(p!=dq){
		printf("%d",p->data);
		p=p->right;
	}
	printf("\n");
}
