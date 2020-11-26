#ifndef paixu_h
#define paixu_h

#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#define  MAX 20
typedef int TypeData;

typedef struct _sq{
	TypeData data[MAX];
	int size;
}SQ;

void initPaixu(SQ *);
void creatPaixu(SQ *);

void bubble1(SQ *);
void bubble2(SQ *);
void bubble3(SQ );

void sort1(SQ *);
void sort2(SQ *);

int Partition1(SQ *, TypeData low , TypeData high);
int Partition2(SQ *, TypeData low , TypeData high);
void QSort(SQ * , TypeData low , TypeData high);
void QuickSort(SQ *);

void dispPaixu(SQ);
void clean(SQ *);


#endif
