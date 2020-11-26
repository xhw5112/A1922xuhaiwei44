#include "paixu.h"

void initPaixu(SQ *sq){
	sq->size = 0;
	return;
}

/*void creatPaixu(SQ *sq){
	printf("please input the size:");
	scanf("%d",&sq->size);
	if(sq->size > MAX){
		return ; 
	}
	for(int i = 0 ; i < sq->size ; i++){
		printf("please put the %dth: ",i);
		scanf("%d",&sq->data[i]);

	}

	return;

}*/

void creatPaixu(SQ *sq){
//	srand(time(0));
	sq->size = MAX;

	for(int i = 0 ; i < MAX ; i++){
		sq->data[i] = rand()% 100;
	}
	
}

void bubble1(SQ *sq){
	int  i, j ,t;
	for(i = 1 ; i < sq->size   ; i++){
		for(j = 0 ; j < sq->size  - i ;j++){
			if(sq->data[j] > sq->data[j+1]){
				t = sq->data[j +1];
				sq->data[j+1] =  sq->data[j];
				sq->data[j] = t;
			
			}
		}
	}
}

void bubble2(SQ *sq){
	int i , j ,t ;
	for (i = 0 ; i < sq->size-1 ; i++){
		for ( j = sq->size -1; j > i ; j--){
			t = sq->data[j-1];
			sq->data[j-1]=sq->data[j];
			sq->data[j] = t;
		}
	}

}

void bubble3(SQ sq){
	int  i, flag = 1, t ;
	for (i = 1; i <sq.size && flag == 1; i++){
		flag = 0;
		for (int j = 0 ;j < sq.size-i; j++){
			if(sq.data[j] > sq.data[j+1]){
				t = sq.data[j];
				sq.data[j]=sq.data[j+1];
				sq.data[j+1]=t;
				flag = 1;
			}
		}
	}
	for(int i = 0 ; i < sq.size ; i++){
		printf("%d\t",sq.data[i]);
	}
	printf("\n");
	return;

}

void sort1(SQ *sq){
	int i ,j , k;
	for(i=1 ; i < sq->size; i++){
		k = sq->data[i];
		j = i - 1;
		while(j >= 0 && sq->data[j]>k){
			sq->data[j+1] = sq->data[j];
			j--;
		}
		sq->data[j+1] = k;
	}

}

void sort2(SQ *sq){
	int i ,j ,k ,m;
	for(i = 0; i < sq->size-1 ; i++){
		m = sq->data[i];
		k = i;
		for (j = i+1; j < sq->size ; j++)
			if(sq->data[j] < m){
				m = sq->data[j];
				k = j;
			}
		sq->data[k] = sq->data[i];
		sq->data[i] = m;

	}

}

int Partition1(SQ *sq, TypeData low , TypeData high){
	int x = sq->data[low];
	while (low < high){
		while ( low < high && sq->data[high] >= x)high--;
		if(low <high){
			sq->data[low] = sq->data[high];
			low++;
		}
		while(low < high && sq->data[low] <= x) low++;
		if (low < high){
			sq->data[high] = sq->data[low];
			high--;
		}
	}
	sq->data[low] = x;
	return low;

}

int Partition2(SQ *sq , TypeData low, TypeData high){
	int i = low ,j =high+1, x = sq->data[low], t;
	while(i < j){
		do i++;while (sq->data[i] < x);
		do i++;while( sq->data[j] > x);
		if ( i < j){
			 t =sq->data[i];
			 sq->data[i] = sq->data[j];
			 sq->data[j] = t;
		}

	}
	sq->data[low] = sq->data[j];
	sq->data[j] = x;
	return j ;
}

void QSort(SQ *sq ,TypeData low , TypeData high){
	
	if (low < high){
		int mid = Partition1(sq ,low , high);
		QSort(sq, low , mid-1);
		QSort(sq, mid +1 , high);

	}
}

void QuickSort(SQ *sq){
	QSort(sq , 0 , sq->size-1);
}


void dispPaixu(SQ sq){
	for(int i = 0 ; i < sq.size ; i++){
		printf("%d  ",sq.data[i]);
	}
	printf("\n");
	return;
}

void clean(SQ *sq){
		free(sq->data);
	
}
