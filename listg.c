#include "listg.h"
void initList(List *list){
	list->head = NULL;
	list->tail = NULL;
	list->current = NULL;
	
}

void putList(List *list , int i , DataType data){
	Node *node = (Node *)malloc(sizeof(Node));
	Node *current = (Node *)malloc(sizeof(Node));
	node->data = data;
	node->next = NULL;
	if (i <= 1){
		if (list->head == NULL){
			list->tail = node;
		}else{
			node->next = list->head;
		}
		list->head= node;
		return;
	}else{
		current = list->head;
		for(int k = 1 ; k<i-1; k++){
			current = current->next;
		}
		node->next =current->next;
		current->next = node;
		return;

	}
	node = list->head;	
	while(node != NULL){
		list->tail = ndoe;
		node = node->next;
	}
	
}


void deleNode(List *list,int i){
	Node *current = (Node *)malloc(sizeof(Node));
	current = list->head;
	if (i <= 1){
		list->head=list->head->next;
		return;
	}else{
		for(int k = 2; k<i;k++){
			current = current->next;
		}
		current->next = current->next->next;
	}

	
	return;

}

int getLength(List *list){
	Node *node = list->head;
	int i = 0;
	while(node != NULL){
		node = node->next;
		i++;
	}
	return i;
}

void dispList(List *list){
	Node *node = list->head;
	int i = 0;
	while(node != NULL){
		printf("the %dth node:%d\n",i+1,node->data);
		node = node->next;
		i++;
	}
	printf("disp finished!\n");


	return;
}
int empty(List *list){
	return list->head== NULL;
}

DataType getData(List *list , int i){
	if( i < 1)return -1;
	Node *current = (Node *)malloc(sizeof(Node));
	current = list->head;
	for(int k = 1 ; k <i ; k++){
		current = current->next;
	}
	return current->data;

}
Node *getNode(List *list, DataType data){

	Node *node = (Node *)malloc(sizeof(Node));
	node = list->head;
	while(node != NULL){
		if(node->data == data){
			return node;
		}else{
			node = node->next;
		}
	}

	return NULL;
}

void clearList(List *list){
	if(list->head==NULL){
		return;
	}
	Node *p,*q;
	p = list->head;
	while(p){
		q =p;
		p = p->next;
		free(q);
	}
	list->head = NULL;
}
void yList(List *list){

	int n , m;
	printf("请输入游戏人数：");
	scanf("%d", &n);
	printf("\n");
	printf("请输入报的数：");
	scanf("%d", &m);
	printf("\n");

	int k = 0;
	Node *p ,*q ,*r;
	q = p=(Node *)malloc(sizeof(Node));
	p -> no =1 ;
	for(int i = 2; i <= n; i++){
		r = (Node *)malloc(sizeof(Node));
		r->no = i;
		q->next = r;
		q = r;
	}
	q->next = p;

	q = p;
	while(q->next !=q){
		for(int i = 1 ; i < m ;i++){
			p = q;
			q = q->next;
		}
		p->next = q->next;
		free(q);
		q = p->next;

	}

	printf("最后一个获胜者的编号是：%d\n", q->no);
}

