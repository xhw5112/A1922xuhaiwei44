#include "listg.h"

int main(int argc, char **argv)
{

	List *list = (List *)malloc(sizeof(List));

	printf("%d\n",empty(list));

/*	putList(list ,1,5);
	putList(list ,1,6);
	putList(list ,2,7);
	putList(list ,3,8);
	putList(list ,1,9);
	putList(list ,2,10);*/
	for(int i =1; i<11;i++){
		putList(list,i,i);
	}
	dispList(list);
	printf("%d,%d\n",list->tail->data,list->head->data);
/*	printf("the 2th data:%d\n",getData(list , 2));
		
	deleNode(list, 1);
	deleNode(list,4);
	
	dispList(list);
	printf("%d\n",empty(list));*/
	
	return 0;

}
