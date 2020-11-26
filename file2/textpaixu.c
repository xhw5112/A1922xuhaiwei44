#include "paixu.h"

int main(int argc, char **argv)
{
	SQ sq;
	initPaixu(&sq);
	creatPaixu(&sq);
	dispPaixu(sq);
	printf("冒泡排序：");
	bubble1(&sq);
	dispPaixu(sq);
	printf("\n");
	
	initPaixu(&sq);	
	creatPaixu(&sq);
	dispPaixu(sq);
	printf("插入排序：");
	sort1(&sq);
	dispPaixu(sq);
	printf("\n");

	creatPaixu(&sq);
	dispPaixu(sq);
	printf("选择排序：");
	sort2(&sq);
	dispPaixu(sq);
	printf("\n");

	creatPaixu(&sq);
	dispPaixu(sq);
	printf("快速排序：");
	QuickSort(&sq);

	dispPaixu(sq);


	return 0 ;


}
