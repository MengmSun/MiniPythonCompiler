#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 100
#define INt 0
#define REAl 1
#define STRING 2
#define Id 3
#define LIST 4
#define oldval 0
#define newval 1
#define slice 2
#define ele 3
#define error 4
#define kong 5
typedef struct Element{
	int type;
	union{
		int i;
		double r;
		char str[MAX];
	        struct List* l;
	};
	struct Element* pre;
	struct Element* next;
}element;
typedef struct List{
	int len;
	element* first;
	element* last;
}list;
typedef struct Val{
	char id[MAX];
	int type;
	int opr;
	int step;
	int weizhi;	
	element *begin;
	char func[MAX];
	union
	{
		int i;
		double r;
		char str[MAX];
		list *l;
		
	};
}val;
