#include "duilie.h"

int main(int arge,char **argv){
	List *list = (List *)malloc(sizeof(List));
	initList(list);
	push(list,80);
	push(list,90);
	pop(list);
	push(list,70);

	printf("队列的元素个数为: %d\n", size(list));
	Node *tmp = frontQueue(list);
	printf("队头元素为: %d\n", tmp->data);
	Node *tem = backQueue(list);
	printf("队尾元素为: %d\n", tem->data);

	Deque *dq = createDeque();
	push_back(dq, 80);
	push_front(dq, 90);
	push_back(dq, 70);
	push_front(dq, 60);
	pop_back(dq);
	print(dq);



	return 0;
}
