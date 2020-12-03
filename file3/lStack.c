#include "lStack.h"

void initStack(Stack *stack){
     stack->tail = NULL;
     stack->head = NULL;


     return;
}


void push(Stack *stack, DataType data){
	Node *node = (Node *)malloc(sizeof(Node));
	node->data = data;
	node->next = NULL;
	if (stack->head==NULL){
		stack->tail = node;
	}else{
		node->next = stack->head;
	
	}
	stack->head = node;
	return;
}

void pop(Stack *stack){
	if(stack->head->next == NULL){
		stack->head = NULL;
	}else{
		stack->head = stack->head->next;
	}


	return ;

}

DataType getLength(Stack *stack){
	Node *node = stack->head;
	int i = 0;
	while(node != NULL){
		node = node->next;
		i++;
	}
	return i;
}

void disp(Stack *stack){
	Node  *node=stack->head;
	int i = 0;
	while(node != NULL){
		printf("the %dth node :%d \n",i+1 , node->data);
		node = node->next;
		i++;
	}
	printf("disp finish!\n");

	return ;

	
}
void conversion(Stack *stack){

	int data  , n;
	printf("请输入一位10进制的数：");
	scanf("%d",&data);
	printf("\n");
	printf("请输入你要转换的进制：");
	scanf("%d",&n);
	printf("\n");
	while(data){
		push(stack , data%n);
		data/=n;
	}

}

int priority(char x){
	switch (x){
		case '+':
		case '-':
		case '=': return 1;
		case '*':
		case '/':return 2;
		case '(':return 3;
	}
}

double compute(double x,double y,char op){
	switch(op){
		case '+':return x+y;
		case '-':return x-y;
		case '*':return x*y;
		case '/':return x/y;
	}
}

void operation(){
	char s2[500], t[1001], op;
	double s1[500];
	int top1=-1, top2=-1;
	double x,y;
	scanf("%s",t);
	for (int i=0;i<strlen(t);i++){
		if (t[i]>='0' && t[i]<='9'){
			double value =0;
			while (t[i]>='0'&&t[i]<='9'){
				value=10*value + t[i]-'0';
				i++;
			}
			if(t[i]=='.'){
				double r=10.0;i++;
				while (t[i]>='0' && t[i]<='9'){
					value += (t[i]-'0')/r;
					r*=10;
					i++;
				}
			}
			s1[++top1]=value;
		}
		if(t[i]==')'){
			while (s2[top2] !='('){
				y=s1[top1--];
				x=s1[top1--];
				op=s2[top2--];
				s1[++top1]=compute(x,y,op);
			}
			top2--;
		}else{
			while (top2!=-1 && s2[top2]!='(' && priority(t[i])<=priority(s2[top2])){
				y=s1[top1--];
				x=s1[top1--];
				op=s2[top2--];
				s1[++top1]=compute(x,y,op);
			}
			s2[++top2]=t[i];
		}
	}
	printf("%.2f\n ",s1[top1]);
}
