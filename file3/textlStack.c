#include "lStack.h"

int main(int argc ,char **argv){
	Stack *stack = (Stack *)malloc(sizeof(Stack));
	initStack(stack);
	push(stack , 3);
	push(stack , 4);
	push(stack , 5);
	push(stack , 6);
	push(stack , 7);
	printf("The length:%d\n",getLength(stack));
	disp(stack);

	pop(stack);
	printf("The length：%d\n" ,getLength(stack) );
	disp(stack);

	pop(stack);
	disp(stack);

	push(stack , 9);
	disp(stack);
	printf("The length：%d\n" ,getLength(stack) );
	
	Stack *stack1 = (Stack *)malloc(sizeof(Stack));
	initStack(stack1);
	conversion(stack1);
	disp(stack1);
	
	printf("输入要计算的g式子：");
	operation();
	return	0;

}
